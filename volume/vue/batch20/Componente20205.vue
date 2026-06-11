<template>
  <section class="panel-20205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20205");
const base = ref(20205);
const total = computed(() => base.value * 2);

function incrementar20205() {
  base.value++;
}
</script>
