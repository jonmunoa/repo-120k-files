<template>
  <section class="panel-35805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35805");
const base = ref(35805);
const total = computed(() => base.value * 2);

function incrementar35805() {
  base.value++;
}
</script>
