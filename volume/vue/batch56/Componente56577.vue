<template>
  <section class="panel-56577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56577");
const base = ref(56577);
const total = computed(() => base.value * 2);

function incrementar56577() {
  base.value++;
}
</script>
