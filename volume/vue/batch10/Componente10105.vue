<template>
  <section class="panel-10105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10105");
const base = ref(10105);
const total = computed(() => base.value * 2);

function incrementar10105() {
  base.value++;
}
</script>
