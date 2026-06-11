<template>
  <section class="panel-23393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23393");
const base = ref(23393);
const total = computed(() => base.value * 2);

function incrementar23393() {
  base.value++;
}
</script>
