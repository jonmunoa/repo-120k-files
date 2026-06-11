<template>
  <section class="panel-16577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16577");
const base = ref(16577);
const total = computed(() => base.value * 2);

function incrementar16577() {
  base.value++;
}
</script>
