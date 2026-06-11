<template>
  <section class="panel-29241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29241");
const base = ref(29241);
const total = computed(() => base.value * 2);

function incrementar29241() {
  base.value++;
}
</script>
