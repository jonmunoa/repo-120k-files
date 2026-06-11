<template>
  <section class="panel-21713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21713");
const base = ref(21713);
const total = computed(() => base.value * 2);

function incrementar21713() {
  base.value++;
}
</script>
