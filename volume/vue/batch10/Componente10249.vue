<template>
  <section class="panel-10249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10249");
const base = ref(10249);
const total = computed(() => base.value * 2);

function incrementar10249() {
  base.value++;
}
</script>
