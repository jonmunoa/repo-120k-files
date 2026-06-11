<template>
  <section class="panel-24513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24513");
const base = ref(24513);
const total = computed(() => base.value * 2);

function incrementar24513() {
  base.value++;
}
</script>
