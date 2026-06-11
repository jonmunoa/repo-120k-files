<template>
  <section class="panel-10005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10005");
const base = ref(10005);
const total = computed(() => base.value * 2);

function incrementar10005() {
  base.value++;
}
</script>
