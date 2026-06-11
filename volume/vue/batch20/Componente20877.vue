<template>
  <section class="panel-20877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20877");
const base = ref(20877);
const total = computed(() => base.value * 2);

function incrementar20877() {
  base.value++;
}
</script>
