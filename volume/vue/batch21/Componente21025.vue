<template>
  <section class="panel-21025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21025");
const base = ref(21025);
const total = computed(() => base.value * 2);

function incrementar21025() {
  base.value++;
}
</script>
