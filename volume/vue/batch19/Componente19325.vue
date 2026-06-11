<template>
  <section class="panel-19325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19325");
const base = ref(19325);
const total = computed(() => base.value * 2);

function incrementar19325() {
  base.value++;
}
</script>
