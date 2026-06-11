<template>
  <section class="panel-39325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39325");
const base = ref(39325);
const total = computed(() => base.value * 2);

function incrementar39325() {
  base.value++;
}
</script>
