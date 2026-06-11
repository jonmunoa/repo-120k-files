<template>
  <section class="panel-9685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9685");
const base = ref(9685);
const total = computed(() => base.value * 2);

function incrementar9685() {
  base.value++;
}
</script>
