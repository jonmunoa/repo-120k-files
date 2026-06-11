<template>
  <section class="panel-37045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37045");
const base = ref(37045);
const total = computed(() => base.value * 2);

function incrementar37045() {
  base.value++;
}
</script>
