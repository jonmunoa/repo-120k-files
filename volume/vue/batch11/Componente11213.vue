<template>
  <section class="panel-11213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11213");
const base = ref(11213);
const total = computed(() => base.value * 2);

function incrementar11213() {
  base.value++;
}
</script>
