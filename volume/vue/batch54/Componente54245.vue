<template>
  <section class="panel-54245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54245");
const base = ref(54245);
const total = computed(() => base.value * 2);

function incrementar54245() {
  base.value++;
}
</script>
