<template>
  <section class="panel-2405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2405");
const base = ref(2405);
const total = computed(() => base.value * 2);

function incrementar2405() {
  base.value++;
}
</script>
