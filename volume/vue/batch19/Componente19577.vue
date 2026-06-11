<template>
  <section class="panel-19577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19577");
const base = ref(19577);
const total = computed(() => base.value * 2);

function incrementar19577() {
  base.value++;
}
</script>
