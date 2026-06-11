<template>
  <section class="panel-21817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21817");
const base = ref(21817);
const total = computed(() => base.value * 2);

function incrementar21817() {
  base.value++;
}
</script>
