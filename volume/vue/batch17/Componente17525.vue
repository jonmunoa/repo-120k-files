<template>
  <section class="panel-17525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17525");
const base = ref(17525);
const total = computed(() => base.value * 2);

function incrementar17525() {
  base.value++;
}
</script>
