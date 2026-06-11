<template>
  <section class="panel-51353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51353");
const base = ref(51353);
const total = computed(() => base.value * 2);

function incrementar51353() {
  base.value++;
}
</script>
