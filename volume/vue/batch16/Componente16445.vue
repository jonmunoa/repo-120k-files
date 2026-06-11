<template>
  <section class="panel-16445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16445");
const base = ref(16445);
const total = computed(() => base.value * 2);

function incrementar16445() {
  base.value++;
}
</script>
