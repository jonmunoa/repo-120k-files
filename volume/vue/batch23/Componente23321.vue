<template>
  <section class="panel-23321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23321");
const base = ref(23321);
const total = computed(() => base.value * 2);

function incrementar23321() {
  base.value++;
}
</script>
