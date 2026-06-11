<template>
  <section class="panel-18605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18605");
const base = ref(18605);
const total = computed(() => base.value * 2);

function incrementar18605() {
  base.value++;
}
</script>
