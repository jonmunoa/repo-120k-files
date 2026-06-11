<template>
  <section class="panel-54605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54605");
const base = ref(54605);
const total = computed(() => base.value * 2);

function incrementar54605() {
  base.value++;
}
</script>
