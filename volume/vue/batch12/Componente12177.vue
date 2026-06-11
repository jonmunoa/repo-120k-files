<template>
  <section class="panel-12177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12177");
const base = ref(12177);
const total = computed(() => base.value * 2);

function incrementar12177() {
  base.value++;
}
</script>
