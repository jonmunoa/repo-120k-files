<template>
  <section class="panel-30373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30373");
const base = ref(30373);
const total = computed(() => base.value * 2);

function incrementar30373() {
  base.value++;
}
</script>
