<template>
  <section class="panel-42025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42025");
const base = ref(42025);
const total = computed(() => base.value * 2);

function incrementar42025() {
  base.value++;
}
</script>
