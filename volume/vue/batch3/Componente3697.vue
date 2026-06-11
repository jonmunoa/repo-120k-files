<template>
  <section class="panel-3697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3697");
const base = ref(3697);
const total = computed(() => base.value * 2);

function incrementar3697() {
  base.value++;
}
</script>
