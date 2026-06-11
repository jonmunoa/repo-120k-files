<template>
  <section class="panel-12769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12769");
const base = ref(12769);
const total = computed(() => base.value * 2);

function incrementar12769() {
  base.value++;
}
</script>
