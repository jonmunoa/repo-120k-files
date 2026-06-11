<template>
  <section class="panel-12209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12209");
const base = ref(12209);
const total = computed(() => base.value * 2);

function incrementar12209() {
  base.value++;
}
</script>
