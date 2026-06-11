<template>
  <section class="panel-19205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19205");
const base = ref(19205);
const total = computed(() => base.value * 2);

function incrementar19205() {
  base.value++;
}
</script>
