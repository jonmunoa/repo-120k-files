<template>
  <section class="panel-35085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35085");
const base = ref(35085);
const total = computed(() => base.value * 2);

function incrementar35085() {
  base.value++;
}
</script>
