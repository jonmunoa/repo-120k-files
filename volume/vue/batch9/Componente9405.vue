<template>
  <section class="panel-9405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9405");
const base = ref(9405);
const total = computed(() => base.value * 2);

function incrementar9405() {
  base.value++;
}
</script>
