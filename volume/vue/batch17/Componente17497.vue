<template>
  <section class="panel-17497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17497");
const base = ref(17497);
const total = computed(() => base.value * 2);

function incrementar17497() {
  base.value++;
}
</script>
