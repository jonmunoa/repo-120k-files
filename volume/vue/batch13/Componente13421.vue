<template>
  <section class="panel-13421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13421");
const base = ref(13421);
const total = computed(() => base.value * 2);

function incrementar13421() {
  base.value++;
}
</script>
