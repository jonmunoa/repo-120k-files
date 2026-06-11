<template>
  <section class="panel-52121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52121");
const base = ref(52121);
const total = computed(() => base.value * 2);

function incrementar52121() {
  base.value++;
}
</script>
