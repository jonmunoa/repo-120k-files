<template>
  <section class="panel-56001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56001");
const base = ref(56001);
const total = computed(() => base.value * 2);

function incrementar56001() {
  base.value++;
}
</script>
