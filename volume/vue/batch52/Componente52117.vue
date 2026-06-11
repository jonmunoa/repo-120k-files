<template>
  <section class="panel-52117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52117");
const base = ref(52117);
const total = computed(() => base.value * 2);

function incrementar52117() {
  base.value++;
}
</script>
