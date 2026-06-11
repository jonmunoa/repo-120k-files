<template>
  <section class="panel-10133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10133");
const base = ref(10133);
const total = computed(() => base.value * 2);

function incrementar10133() {
  base.value++;
}
</script>
