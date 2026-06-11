<template>
  <section class="panel-16457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16457");
const base = ref(16457);
const total = computed(() => base.value * 2);

function incrementar16457() {
  base.value++;
}
</script>
