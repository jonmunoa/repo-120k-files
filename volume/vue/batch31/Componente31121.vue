<template>
  <section class="panel-31121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31121");
const base = ref(31121);
const total = computed(() => base.value * 2);

function incrementar31121() {
  base.value++;
}
</script>
