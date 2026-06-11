<template>
  <section class="panel-34229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34229");
const base = ref(34229);
const total = computed(() => base.value * 2);

function incrementar34229() {
  base.value++;
}
</script>
