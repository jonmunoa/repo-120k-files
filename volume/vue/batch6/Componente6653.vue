<template>
  <section class="panel-6653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6653");
const base = ref(6653);
const total = computed(() => base.value * 2);

function incrementar6653() {
  base.value++;
}
</script>
