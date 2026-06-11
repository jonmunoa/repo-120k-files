<template>
  <section class="panel-52653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52653");
const base = ref(52653);
const total = computed(() => base.value * 2);

function incrementar52653() {
  base.value++;
}
</script>
