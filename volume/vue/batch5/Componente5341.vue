<template>
  <section class="panel-5341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5341");
const base = ref(5341);
const total = computed(() => base.value * 2);

function incrementar5341() {
  base.value++;
}
</script>
