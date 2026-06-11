<template>
  <section class="panel-12269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12269");
const base = ref(12269);
const total = computed(() => base.value * 2);

function incrementar12269() {
  base.value++;
}
</script>
