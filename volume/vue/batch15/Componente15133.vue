<template>
  <section class="panel-15133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15133");
const base = ref(15133);
const total = computed(() => base.value * 2);

function incrementar15133() {
  base.value++;
}
</script>
