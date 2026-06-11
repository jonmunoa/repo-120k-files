<template>
  <section class="panel-32045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32045");
const base = ref(32045);
const total = computed(() => base.value * 2);

function incrementar32045() {
  base.value++;
}
</script>
