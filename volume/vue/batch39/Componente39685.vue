<template>
  <section class="panel-39685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39685");
const base = ref(39685);
const total = computed(() => base.value * 2);

function incrementar39685() {
  base.value++;
}
</script>
