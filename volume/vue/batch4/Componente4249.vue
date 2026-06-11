<template>
  <section class="panel-4249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4249");
const base = ref(4249);
const total = computed(() => base.value * 2);

function incrementar4249() {
  base.value++;
}
</script>
