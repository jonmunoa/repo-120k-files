<template>
  <section class="panel-11633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11633");
const base = ref(11633);
const total = computed(() => base.value * 2);

function incrementar11633() {
  base.value++;
}
</script>
