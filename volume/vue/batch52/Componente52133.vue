<template>
  <section class="panel-52133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52133");
const base = ref(52133);
const total = computed(() => base.value * 2);

function incrementar52133() {
  base.value++;
}
</script>
