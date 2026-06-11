<template>
  <section class="panel-15713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15713");
const base = ref(15713);
const total = computed(() => base.value * 2);

function incrementar15713() {
  base.value++;
}
</script>
