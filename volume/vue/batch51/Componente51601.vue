<template>
  <section class="panel-51601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51601");
const base = ref(51601);
const total = computed(() => base.value * 2);

function incrementar51601() {
  base.value++;
}
</script>
