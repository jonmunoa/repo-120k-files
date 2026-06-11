<template>
  <section class="panel-54397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54397");
const base = ref(54397);
const total = computed(() => base.value * 2);

function incrementar54397() {
  base.value++;
}
</script>
