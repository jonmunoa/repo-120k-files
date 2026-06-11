<template>
  <section class="panel-22653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22653");
const base = ref(22653);
const total = computed(() => base.value * 2);

function incrementar22653() {
  base.value++;
}
</script>
