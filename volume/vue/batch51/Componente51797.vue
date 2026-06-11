<template>
  <section class="panel-51797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51797");
const base = ref(51797);
const total = computed(() => base.value * 2);

function incrementar51797() {
  base.value++;
}
</script>
