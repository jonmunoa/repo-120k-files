<template>
  <section class="panel-2801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2801");
const base = ref(2801);
const total = computed(() => base.value * 2);

function incrementar2801() {
  base.value++;
}
</script>
