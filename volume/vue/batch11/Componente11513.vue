<template>
  <section class="panel-11513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11513");
const base = ref(11513);
const total = computed(() => base.value * 2);

function incrementar11513() {
  base.value++;
}
</script>
