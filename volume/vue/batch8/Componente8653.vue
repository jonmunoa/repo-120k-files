<template>
  <section class="panel-8653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8653");
const base = ref(8653);
const total = computed(() => base.value * 2);

function incrementar8653() {
  base.value++;
}
</script>
