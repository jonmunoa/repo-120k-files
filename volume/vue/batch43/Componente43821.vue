<template>
  <section class="panel-43821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43821");
const base = ref(43821);
const total = computed(() => base.value * 2);

function incrementar43821() {
  base.value++;
}
</script>
