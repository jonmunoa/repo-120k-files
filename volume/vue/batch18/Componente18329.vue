<template>
  <section class="panel-18329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18329");
const base = ref(18329);
const total = computed(() => base.value * 2);

function incrementar18329() {
  base.value++;
}
</script>
