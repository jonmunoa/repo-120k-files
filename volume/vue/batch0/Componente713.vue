<template>
  <section class="panel-713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 713");
const base = ref(713);
const total = computed(() => base.value * 2);

function incrementar713() {
  base.value++;
}
</script>
