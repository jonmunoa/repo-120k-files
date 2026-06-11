<template>
  <section class="panel-31761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31761");
const base = ref(31761);
const total = computed(() => base.value * 2);

function incrementar31761() {
  base.value++;
}
</script>
