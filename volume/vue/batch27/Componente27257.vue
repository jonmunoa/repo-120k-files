<template>
  <section class="panel-27257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27257");
const base = ref(27257);
const total = computed(() => base.value * 2);

function incrementar27257() {
  base.value++;
}
</script>
