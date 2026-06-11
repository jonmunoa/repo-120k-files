<template>
  <section class="panel-37397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37397");
const base = ref(37397);
const total = computed(() => base.value * 2);

function incrementar37397() {
  base.value++;
}
</script>
