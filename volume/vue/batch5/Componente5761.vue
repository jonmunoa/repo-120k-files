<template>
  <section class="panel-5761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5761");
const base = ref(5761);
const total = computed(() => base.value * 2);

function incrementar5761() {
  base.value++;
}
</script>
