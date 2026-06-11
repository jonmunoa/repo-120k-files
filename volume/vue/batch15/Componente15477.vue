<template>
  <section class="panel-15477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15477");
const base = ref(15477);
const total = computed(() => base.value * 2);

function incrementar15477() {
  base.value++;
}
</script>
