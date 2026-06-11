<template>
  <section class="panel-52921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52921");
const base = ref(52921);
const total = computed(() => base.value * 2);

function incrementar52921() {
  base.value++;
}
</script>
