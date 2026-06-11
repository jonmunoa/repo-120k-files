<template>
  <section class="panel-27653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27653");
const base = ref(27653);
const total = computed(() => base.value * 2);

function incrementar27653() {
  base.value++;
}
</script>
