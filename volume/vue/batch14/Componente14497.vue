<template>
  <section class="panel-14497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14497");
const base = ref(14497);
const total = computed(() => base.value * 2);

function incrementar14497() {
  base.value++;
}
</script>
