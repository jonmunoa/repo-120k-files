<template>
  <section class="panel-45761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45761");
const base = ref(45761);
const total = computed(() => base.value * 2);

function incrementar45761() {
  base.value++;
}
</script>
