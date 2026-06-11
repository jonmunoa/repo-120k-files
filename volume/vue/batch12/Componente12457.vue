<template>
  <section class="panel-12457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12457");
const base = ref(12457);
const total = computed(() => base.value * 2);

function incrementar12457() {
  base.value++;
}
</script>
