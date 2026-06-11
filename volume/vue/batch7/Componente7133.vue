<template>
  <section class="panel-7133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7133");
const base = ref(7133);
const total = computed(() => base.value * 2);

function incrementar7133() {
  base.value++;
}
</script>
