<template>
  <section class="panel-19901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19901");
const base = ref(19901);
const total = computed(() => base.value * 2);

function incrementar19901() {
  base.value++;
}
</script>
