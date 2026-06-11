<template>
  <section class="panel-7249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7249");
const base = ref(7249);
const total = computed(() => base.value * 2);

function incrementar7249() {
  base.value++;
}
</script>
