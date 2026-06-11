<template>
  <section class="panel-40025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40025");
const base = ref(40025);
const total = computed(() => base.value * 2);

function incrementar40025() {
  base.value++;
}
</script>
