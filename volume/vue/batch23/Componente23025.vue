<template>
  <section class="panel-23025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23025");
const base = ref(23025);
const total = computed(() => base.value * 2);

function incrementar23025() {
  base.value++;
}
</script>
