<template>
  <section class="panel-23489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23489");
const base = ref(23489);
const total = computed(() => base.value * 2);

function incrementar23489() {
  base.value++;
}
</script>
