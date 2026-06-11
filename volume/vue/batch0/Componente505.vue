<template>
  <section class="panel-505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 505");
const base = ref(505);
const total = computed(() => base.value * 2);

function incrementar505() {
  base.value++;
}
</script>
