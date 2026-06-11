<template>
  <section class="panel-41133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41133");
const base = ref(41133);
const total = computed(() => base.value * 2);

function incrementar41133() {
  base.value++;
}
</script>
