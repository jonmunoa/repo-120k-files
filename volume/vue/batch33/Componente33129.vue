<template>
  <section class="panel-33129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33129");
const base = ref(33129);
const total = computed(() => base.value * 2);

function incrementar33129() {
  base.value++;
}
</script>
