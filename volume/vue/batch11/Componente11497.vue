<template>
  <section class="panel-11497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11497");
const base = ref(11497);
const total = computed(() => base.value * 2);

function incrementar11497() {
  base.value++;
}
</script>
