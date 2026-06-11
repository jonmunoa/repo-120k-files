<template>
  <section class="panel-27761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27761");
const base = ref(27761);
const total = computed(() => base.value * 2);

function incrementar27761() {
  base.value++;
}
</script>
