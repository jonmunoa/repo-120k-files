<template>
  <section class="panel-42493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42493");
const base = ref(42493);
const total = computed(() => base.value * 2);

function incrementar42493() {
  base.value++;
}
</script>
