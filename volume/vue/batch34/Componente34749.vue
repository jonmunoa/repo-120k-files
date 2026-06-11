<template>
  <section class="panel-34749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34749");
const base = ref(34749);
const total = computed(() => base.value * 2);

function incrementar34749() {
  base.value++;
}
</script>
