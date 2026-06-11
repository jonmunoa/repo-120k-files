<template>
  <section class="panel-50761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50761");
const base = ref(50761);
const total = computed(() => base.value * 2);

function incrementar50761() {
  base.value++;
}
</script>
