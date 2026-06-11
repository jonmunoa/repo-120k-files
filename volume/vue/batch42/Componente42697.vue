<template>
  <section class="panel-42697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42697");
const base = ref(42697);
const total = computed(() => base.value * 2);

function incrementar42697() {
  base.value++;
}
</script>
