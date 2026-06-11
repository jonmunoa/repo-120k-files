<template>
  <section class="panel-4925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4925");
const base = ref(4925);
const total = computed(() => base.value * 2);

function incrementar4925() {
  base.value++;
}
</script>
