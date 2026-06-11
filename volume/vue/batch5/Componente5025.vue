<template>
  <section class="panel-5025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5025");
const base = ref(5025);
const total = computed(() => base.value * 2);

function incrementar5025() {
  base.value++;
}
</script>
