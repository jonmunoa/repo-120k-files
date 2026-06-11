<template>
  <section class="panel-27453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27453");
const base = ref(27453);
const total = computed(() => base.value * 2);

function incrementar27453() {
  base.value++;
}
</script>
