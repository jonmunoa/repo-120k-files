<template>
  <section class="panel-7001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7001");
const base = ref(7001);
const total = computed(() => base.value * 2);

function incrementar7001() {
  base.value++;
}
</script>
