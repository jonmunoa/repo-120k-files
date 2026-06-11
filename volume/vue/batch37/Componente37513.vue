<template>
  <section class="panel-37513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37513");
const base = ref(37513);
const total = computed(() => base.value * 2);

function incrementar37513() {
  base.value++;
}
</script>
