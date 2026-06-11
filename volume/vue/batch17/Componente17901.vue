<template>
  <section class="panel-17901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17901");
const base = ref(17901);
const total = computed(() => base.value * 2);

function incrementar17901() {
  base.value++;
}
</script>
