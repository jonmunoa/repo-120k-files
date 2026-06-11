<template>
  <section class="panel-27225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27225");
const base = ref(27225);
const total = computed(() => base.value * 2);

function incrementar27225() {
  base.value++;
}
</script>
