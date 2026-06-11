<template>
  <section class="panel-9133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9133");
const base = ref(9133);
const total = computed(() => base.value * 2);

function incrementar9133() {
  base.value++;
}
</script>
