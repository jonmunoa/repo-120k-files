<template>
  <section class="panel-27397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27397");
const base = ref(27397);
const total = computed(() => base.value * 2);

function incrementar27397() {
  base.value++;
}
</script>
