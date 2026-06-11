<template>
  <section class="panel-1601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1601");
const base = ref(1601);
const total = computed(() => base.value * 2);

function incrementar1601() {
  base.value++;
}
</script>
