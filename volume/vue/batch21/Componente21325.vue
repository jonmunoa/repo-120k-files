<template>
  <section class="panel-21325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21325");
const base = ref(21325);
const total = computed(() => base.value * 2);

function incrementar21325() {
  base.value++;
}
</script>
