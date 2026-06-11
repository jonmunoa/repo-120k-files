<template>
  <section class="panel-45109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45109");
const base = ref(45109);
const total = computed(() => base.value * 2);

function incrementar45109() {
  base.value++;
}
</script>
