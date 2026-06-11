<template>
  <section class="panel-32685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32685");
const base = ref(32685);
const total = computed(() => base.value * 2);

function incrementar32685() {
  base.value++;
}
</script>
