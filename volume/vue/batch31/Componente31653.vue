<template>
  <section class="panel-31653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31653");
const base = ref(31653);
const total = computed(() => base.value * 2);

function incrementar31653() {
  base.value++;
}
</script>
