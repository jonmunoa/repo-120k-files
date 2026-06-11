<template>
  <section class="panel-10109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10109");
const base = ref(10109);
const total = computed(() => base.value * 2);

function incrementar10109() {
  base.value++;
}
</script>
