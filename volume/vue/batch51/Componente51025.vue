<template>
  <section class="panel-51025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51025");
const base = ref(51025);
const total = computed(() => base.value * 2);

function incrementar51025() {
  base.value++;
}
</script>
