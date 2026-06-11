<template>
  <section class="panel-29325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29325");
const base = ref(29325);
const total = computed(() => base.value * 2);

function incrementar29325() {
  base.value++;
}
</script>
