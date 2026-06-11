<template>
  <section class="panel-45133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45133");
const base = ref(45133);
const total = computed(() => base.value * 2);

function incrementar45133() {
  base.value++;
}
</script>
