<template>
  <section class="panel-7025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7025");
const base = ref(7025);
const total = computed(() => base.value * 2);

function incrementar7025() {
  base.value++;
}
</script>
