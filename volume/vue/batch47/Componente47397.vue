<template>
  <section class="panel-47397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47397");
const base = ref(47397);
const total = computed(() => base.value * 2);

function incrementar47397() {
  base.value++;
}
</script>
