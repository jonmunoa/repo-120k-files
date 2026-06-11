<template>
  <section class="panel-37505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37505");
const base = ref(37505);
const total = computed(() => base.value * 2);

function incrementar37505() {
  base.value++;
}
</script>
