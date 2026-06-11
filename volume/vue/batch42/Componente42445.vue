<template>
  <section class="panel-42445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42445");
const base = ref(42445);
const total = computed(() => base.value * 2);

function incrementar42445() {
  base.value++;
}
</script>
