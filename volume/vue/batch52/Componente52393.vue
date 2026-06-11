<template>
  <section class="panel-52393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52393");
const base = ref(52393);
const total = computed(() => base.value * 2);

function incrementar52393() {
  base.value++;
}
</script>
