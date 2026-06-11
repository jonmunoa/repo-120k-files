<template>
  <section class="panel-4769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4769");
const base = ref(4769);
const total = computed(() => base.value * 2);

function incrementar4769() {
  base.value++;
}
</script>
