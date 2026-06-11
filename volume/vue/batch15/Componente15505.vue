<template>
  <section class="panel-15505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15505");
const base = ref(15505);
const total = computed(() => base.value * 2);

function incrementar15505() {
  base.value++;
}
</script>
