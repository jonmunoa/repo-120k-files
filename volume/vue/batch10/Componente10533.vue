<template>
  <section class="panel-10533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10533");
const base = ref(10533);
const total = computed(() => base.value * 2);

function incrementar10533() {
  base.value++;
}
</script>
