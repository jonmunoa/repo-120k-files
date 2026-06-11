<template>
  <section class="panel-27625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27625");
const base = ref(27625);
const total = computed(() => base.value * 2);

function incrementar27625() {
  base.value++;
}
</script>
