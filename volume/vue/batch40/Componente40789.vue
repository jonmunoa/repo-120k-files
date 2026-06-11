<template>
  <section class="panel-40789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40789");
const base = ref(40789);
const total = computed(() => base.value * 2);

function incrementar40789() {
  base.value++;
}
</script>
