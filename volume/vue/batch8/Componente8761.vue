<template>
  <section class="panel-8761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8761");
const base = ref(8761);
const total = computed(() => base.value * 2);

function incrementar8761() {
  base.value++;
}
</script>
