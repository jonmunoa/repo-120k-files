<template>
  <section class="panel-30761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30761");
const base = ref(30761);
const total = computed(() => base.value * 2);

function incrementar30761() {
  base.value++;
}
</script>
