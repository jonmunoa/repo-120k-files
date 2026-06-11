<template>
  <section class="panel-20321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20321");
const base = ref(20321);
const total = computed(() => base.value * 2);

function incrementar20321() {
  base.value++;
}
</script>
