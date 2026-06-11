<template>
  <section class="panel-29409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29409");
const base = ref(29409);
const total = computed(() => base.value * 2);

function incrementar29409() {
  base.value++;
}
</script>
