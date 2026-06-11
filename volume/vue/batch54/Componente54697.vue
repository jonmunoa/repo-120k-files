<template>
  <section class="panel-54697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54697");
const base = ref(54697);
const total = computed(() => base.value * 2);

function incrementar54697() {
  base.value++;
}
</script>
