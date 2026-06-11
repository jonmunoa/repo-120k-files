<template>
  <section class="panel-2325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2325");
const base = ref(2325);
const total = computed(() => base.value * 2);

function incrementar2325() {
  base.value++;
}
</script>
