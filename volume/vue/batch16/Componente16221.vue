<template>
  <section class="panel-16221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16221");
const base = ref(16221);
const total = computed(() => base.value * 2);

function incrementar16221() {
  base.value++;
}
</script>
