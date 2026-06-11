<template>
  <section class="panel-17453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17453");
const base = ref(17453);
const total = computed(() => base.value * 2);

function incrementar17453() {
  base.value++;
}
</script>
