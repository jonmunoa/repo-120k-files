<template>
  <section class="panel-11601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11601");
const base = ref(11601);
const total = computed(() => base.value * 2);

function incrementar11601() {
  base.value++;
}
</script>
