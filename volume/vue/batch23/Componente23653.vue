<template>
  <section class="panel-23653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23653");
const base = ref(23653);
const total = computed(() => base.value * 2);

function incrementar23653() {
  base.value++;
}
</script>
