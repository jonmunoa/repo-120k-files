<template>
  <section class="panel-52945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52945");
const base = ref(52945);
const total = computed(() => base.value * 2);

function incrementar52945() {
  base.value++;
}
</script>
