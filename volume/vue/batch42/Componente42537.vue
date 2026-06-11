<template>
  <section class="panel-42537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42537");
const base = ref(42537);
const total = computed(() => base.value * 2);

function incrementar42537() {
  base.value++;
}
</script>
