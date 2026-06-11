<template>
  <section class="panel-55469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55469");
const base = ref(55469);
const total = computed(() => base.value * 2);

function incrementar55469() {
  base.value++;
}
</script>
