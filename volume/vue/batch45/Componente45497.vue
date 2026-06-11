<template>
  <section class="panel-45497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45497");
const base = ref(45497);
const total = computed(() => base.value * 2);

function incrementar45497() {
  base.value++;
}
</script>
