<template>
  <section class="panel-15121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15121");
const base = ref(15121);
const total = computed(() => base.value * 2);

function incrementar15121() {
  base.value++;
}
</script>
