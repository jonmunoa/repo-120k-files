<template>
  <section class="panel-13605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13605");
const base = ref(13605);
const total = computed(() => base.value * 2);

function incrementar13605() {
  base.value++;
}
</script>
