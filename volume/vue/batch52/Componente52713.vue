<template>
  <section class="panel-52713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52713");
const base = ref(52713);
const total = computed(() => base.value * 2);

function incrementar52713() {
  base.value++;
}
</script>
