<template>
  <section class="panel-16713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16713");
const base = ref(16713);
const total = computed(() => base.value * 2);

function incrementar16713() {
  base.value++;
}
</script>
