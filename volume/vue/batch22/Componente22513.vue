<template>
  <section class="panel-22513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22513");
const base = ref(22513);
const total = computed(() => base.value * 2);

function incrementar22513() {
  base.value++;
}
</script>
