<template>
  <section class="panel-52577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52577");
const base = ref(52577);
const total = computed(() => base.value * 2);

function incrementar52577() {
  base.value++;
}
</script>
