<template>
  <section class="panel-47001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47001");
const base = ref(47001);
const total = computed(() => base.value * 2);

function incrementar47001() {
  base.value++;
}
</script>
