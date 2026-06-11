<template>
  <section class="panel-1713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1713");
const base = ref(1713);
const total = computed(() => base.value * 2);

function incrementar1713() {
  base.value++;
}
</script>
