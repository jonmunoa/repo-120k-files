<template>
  <section class="panel-48577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48577");
const base = ref(48577);
const total = computed(() => base.value * 2);

function incrementar48577() {
  base.value++;
}
</script>
