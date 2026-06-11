<template>
  <section class="panel-40341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40341");
const base = ref(40341);
const total = computed(() => base.value * 2);

function incrementar40341() {
  base.value++;
}
</script>
