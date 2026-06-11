<template>
  <section class="panel-19001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19001");
const base = ref(19001);
const total = computed(() => base.value * 2);

function incrementar19001() {
  base.value++;
}
</script>
