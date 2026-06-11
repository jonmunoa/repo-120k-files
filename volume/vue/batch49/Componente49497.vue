<template>
  <section class="panel-49497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49497");
const base = ref(49497);
const total = computed(() => base.value * 2);

function incrementar49497() {
  base.value++;
}
</script>
