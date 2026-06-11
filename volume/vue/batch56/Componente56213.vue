<template>
  <section class="panel-56213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56213");
const base = ref(56213);
const total = computed(() => base.value * 2);

function incrementar56213() {
  base.value++;
}
</script>
