<template>
  <section class="panel-56761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56761");
const base = ref(56761);
const total = computed(() => base.value * 2);

function incrementar56761() {
  base.value++;
}
</script>
