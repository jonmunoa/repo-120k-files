<template>
  <section class="panel-31577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31577");
const base = ref(31577);
const total = computed(() => base.value * 2);

function incrementar31577() {
  base.value++;
}
</script>
