<template>
  <section class="panel-11165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11165");
const base = ref(11165);
const total = computed(() => base.value * 2);

function incrementar11165() {
  base.value++;
}
</script>
