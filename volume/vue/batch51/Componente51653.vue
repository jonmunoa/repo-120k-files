<template>
  <section class="panel-51653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51653");
const base = ref(51653);
const total = computed(() => base.value * 2);

function incrementar51653() {
  base.value++;
}
</script>
