<template>
  <section class="panel-10617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10617");
const base = ref(10617);
const total = computed(() => base.value * 2);

function incrementar10617() {
  base.value++;
}
</script>
