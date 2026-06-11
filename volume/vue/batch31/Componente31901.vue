<template>
  <section class="panel-31901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31901");
const base = ref(31901);
const total = computed(() => base.value * 2);

function incrementar31901() {
  base.value++;
}
</script>
