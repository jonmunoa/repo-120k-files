<template>
  <section class="panel-20133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20133");
const base = ref(20133);
const total = computed(() => base.value * 2);

function incrementar20133() {
  base.value++;
}
</script>
