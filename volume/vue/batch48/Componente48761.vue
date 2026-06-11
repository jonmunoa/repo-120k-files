<template>
  <section class="panel-48761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48761");
const base = ref(48761);
const total = computed(() => base.value * 2);

function incrementar48761() {
  base.value++;
}
</script>
