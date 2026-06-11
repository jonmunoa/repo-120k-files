<template>
  <section class="panel-29121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29121");
const base = ref(29121);
const total = computed(() => base.value * 2);

function incrementar29121() {
  base.value++;
}
</script>
