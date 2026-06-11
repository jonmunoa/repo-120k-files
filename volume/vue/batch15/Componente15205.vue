<template>
  <section class="panel-15205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15205");
const base = ref(15205);
const total = computed(() => base.value * 2);

function incrementar15205() {
  base.value++;
}
</script>
