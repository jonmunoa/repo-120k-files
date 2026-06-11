<template>
  <section class="panel-13025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13025");
const base = ref(13025);
const total = computed(() => base.value * 2);

function incrementar13025() {
  base.value++;
}
</script>
