<template>
  <section class="panel-24577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24577");
const base = ref(24577);
const total = computed(() => base.value * 2);

function incrementar24577() {
  base.value++;
}
</script>
