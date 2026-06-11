<template>
  <section class="panel-2205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2205");
const base = ref(2205);
const total = computed(() => base.value * 2);

function incrementar2205() {
  base.value++;
}
</script>
