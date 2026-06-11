<template>
  <section class="panel-52853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52853");
const base = ref(52853);
const total = computed(() => base.value * 2);

function incrementar52853() {
  base.value++;
}
</script>
