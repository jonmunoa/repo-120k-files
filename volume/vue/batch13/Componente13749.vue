<template>
  <section class="panel-13749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13749");
const base = ref(13749);
const total = computed(() => base.value * 2);

function incrementar13749() {
  base.value++;
}
</script>
