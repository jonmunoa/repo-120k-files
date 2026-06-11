<template>
  <section class="panel-52737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52737");
const base = ref(52737);
const total = computed(() => base.value * 2);

function incrementar52737() {
  base.value++;
}
</script>
