<template>
  <section class="panel-31765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31765");
const base = ref(31765);
const total = computed(() => base.value * 2);

function incrementar31765() {
  base.value++;
}
</script>
