<template>
  <section class="panel-41697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41697");
const base = ref(41697);
const total = computed(() => base.value * 2);

function incrementar41697() {
  base.value++;
}
</script>
