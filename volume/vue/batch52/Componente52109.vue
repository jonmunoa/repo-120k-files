<template>
  <section class="panel-52109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52109");
const base = ref(52109);
const total = computed(() => base.value * 2);

function incrementar52109() {
  base.value++;
}
</script>
