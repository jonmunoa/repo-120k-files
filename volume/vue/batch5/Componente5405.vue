<template>
  <section class="panel-5405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5405");
const base = ref(5405);
const total = computed(() => base.value * 2);

function incrementar5405() {
  base.value++;
}
</script>
