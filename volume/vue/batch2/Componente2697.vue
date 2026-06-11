<template>
  <section class="panel-2697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2697");
const base = ref(2697);
const total = computed(() => base.value * 2);

function incrementar2697() {
  base.value++;
}
</script>
