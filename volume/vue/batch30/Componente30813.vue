<template>
  <section class="panel-30813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30813");
const base = ref(30813);
const total = computed(() => base.value * 2);

function incrementar30813() {
  base.value++;
}
</script>
