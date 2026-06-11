<template>
  <section class="panel-52477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52477");
const base = ref(52477);
const total = computed(() => base.value * 2);

function incrementar52477() {
  base.value++;
}
</script>
