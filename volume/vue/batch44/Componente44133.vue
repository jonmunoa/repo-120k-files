<template>
  <section class="panel-44133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44133");
const base = ref(44133);
const total = computed(() => base.value * 2);

function incrementar44133() {
  base.value++;
}
</script>
