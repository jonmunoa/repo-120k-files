<template>
  <section class="panel-8505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8505");
const base = ref(8505);
const total = computed(() => base.value * 2);

function incrementar8505() {
  base.value++;
}
</script>
