<template>
  <section class="panel-27329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27329");
const base = ref(27329);
const total = computed(() => base.value * 2);

function incrementar27329() {
  base.value++;
}
</script>
