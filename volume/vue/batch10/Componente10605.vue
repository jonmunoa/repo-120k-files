<template>
  <section class="panel-10605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10605");
const base = ref(10605);
const total = computed(() => base.value * 2);

function incrementar10605() {
  base.value++;
}
</script>
