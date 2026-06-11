<template>
  <section class="panel-13497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13497");
const base = ref(13497);
const total = computed(() => base.value * 2);

function incrementar13497() {
  base.value++;
}
</script>
