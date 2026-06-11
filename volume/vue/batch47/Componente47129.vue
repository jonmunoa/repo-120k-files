<template>
  <section class="panel-47129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47129");
const base = ref(47129);
const total = computed(() => base.value * 2);

function incrementar47129() {
  base.value++;
}
</script>
