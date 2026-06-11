<template>
  <section class="panel-9109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9109");
const base = ref(9109);
const total = computed(() => base.value * 2);

function incrementar9109() {
  base.value++;
}
</script>
