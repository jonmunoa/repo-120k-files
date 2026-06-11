<template>
  <section class="panel-14109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14109");
const base = ref(14109);
const total = computed(() => base.value * 2);

function incrementar14109() {
  base.value++;
}
</script>
