<template>
  <section class="panel-44697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44697");
const base = ref(44697);
const total = computed(() => base.value * 2);

function incrementar44697() {
  base.value++;
}
</script>
