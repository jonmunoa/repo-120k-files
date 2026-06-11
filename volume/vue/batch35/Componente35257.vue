<template>
  <section class="panel-35257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35257");
const base = ref(35257);
const total = computed(() => base.value * 2);

function incrementar35257() {
  base.value++;
}
</script>
