<template>
  <section class="panel-13001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13001");
const base = ref(13001);
const total = computed(() => base.value * 2);

function incrementar13001() {
  base.value++;
}
</script>
