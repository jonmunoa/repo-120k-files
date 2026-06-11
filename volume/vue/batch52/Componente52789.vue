<template>
  <section class="panel-52789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52789");
const base = ref(52789);
const total = computed(() => base.value * 2);

function incrementar52789() {
  base.value++;
}
</script>
