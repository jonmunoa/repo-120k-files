<template>
  <section class="panel-35237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35237");
const base = ref(35237);
const total = computed(() => base.value * 2);

function incrementar35237() {
  base.value++;
}
</script>
