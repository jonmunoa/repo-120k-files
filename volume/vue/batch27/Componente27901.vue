<template>
  <section class="panel-27901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27901");
const base = ref(27901);
const total = computed(() => base.value * 2);

function incrementar27901() {
  base.value++;
}
</script>
