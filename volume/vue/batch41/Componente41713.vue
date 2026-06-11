<template>
  <section class="panel-41713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41713");
const base = ref(41713);
const total = computed(() => base.value * 2);

function incrementar41713() {
  base.value++;
}
</script>
