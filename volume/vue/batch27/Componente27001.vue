<template>
  <section class="panel-27001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27001");
const base = ref(27001);
const total = computed(() => base.value * 2);

function incrementar27001() {
  base.value++;
}
</script>
