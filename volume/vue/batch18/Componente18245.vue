<template>
  <section class="panel-18245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18245");
const base = ref(18245);
const total = computed(() => base.value * 2);

function incrementar18245() {
  base.value++;
}
</script>
