<template>
  <section class="panel-31001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31001");
const base = ref(31001);
const total = computed(() => base.value * 2);

function incrementar31001() {
  base.value++;
}
</script>
