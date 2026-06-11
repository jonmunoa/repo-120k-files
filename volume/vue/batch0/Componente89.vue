<template>
  <section class="panel-89">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 89");
const base = ref(89);
const total = computed(() => base.value * 2);

function incrementar89() {
  base.value++;
}
</script>
