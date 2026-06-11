<template>
  <section class="panel-15265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15265");
const base = ref(15265);
const total = computed(() => base.value * 2);

function incrementar15265() {
  base.value++;
}
</script>
