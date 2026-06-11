<template>
  <section class="panel-53025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53025");
const base = ref(53025);
const total = computed(() => base.value * 2);

function incrementar53025() {
  base.value++;
}
</script>
