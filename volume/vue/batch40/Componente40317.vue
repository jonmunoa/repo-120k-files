<template>
  <section class="panel-40317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40317");
const base = ref(40317);
const total = computed(() => base.value * 2);

function incrementar40317() {
  base.value++;
}
</script>
