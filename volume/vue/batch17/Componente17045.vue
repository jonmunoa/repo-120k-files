<template>
  <section class="panel-17045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17045");
const base = ref(17045);
const total = computed(() => base.value * 2);

function incrementar17045() {
  base.value++;
}
</script>
