<template>
  <section class="panel-29653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29653");
const base = ref(29653);
const total = computed(() => base.value * 2);

function incrementar29653() {
  base.value++;
}
</script>
