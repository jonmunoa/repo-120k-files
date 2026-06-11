<template>
  <section class="panel-55045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55045");
const base = ref(55045);
const total = computed(() => base.value * 2);

function incrementar55045() {
  base.value++;
}
</script>
