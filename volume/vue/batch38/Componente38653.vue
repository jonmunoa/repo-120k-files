<template>
  <section class="panel-38653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38653");
const base = ref(38653);
const total = computed(() => base.value * 2);

function incrementar38653() {
  base.value++;
}
</script>
