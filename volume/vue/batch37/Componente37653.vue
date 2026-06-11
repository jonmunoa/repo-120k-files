<template>
  <section class="panel-37653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37653");
const base = ref(37653);
const total = computed(() => base.value * 2);

function incrementar37653() {
  base.value++;
}
</script>
