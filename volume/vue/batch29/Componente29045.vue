<template>
  <section class="panel-29045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29045");
const base = ref(29045);
const total = computed(() => base.value * 2);

function incrementar29045() {
  base.value++;
}
</script>
