<template>
  <section class="panel-47045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47045");
const base = ref(47045);
const total = computed(() => base.value * 2);

function incrementar47045() {
  base.value++;
}
</script>
