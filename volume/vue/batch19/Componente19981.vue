<template>
  <section class="panel-19981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19981");
const base = ref(19981);
const total = computed(() => base.value * 2);

function incrementar19981() {
  base.value++;
}
</script>
