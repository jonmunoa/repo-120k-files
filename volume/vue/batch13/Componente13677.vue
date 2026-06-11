<template>
  <section class="panel-13677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13677");
const base = ref(13677);
const total = computed(() => base.value * 2);

function incrementar13677() {
  base.value++;
}
</script>
