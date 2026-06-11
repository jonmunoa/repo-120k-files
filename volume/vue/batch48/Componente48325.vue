<template>
  <section class="panel-48325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48325");
const base = ref(48325);
const total = computed(() => base.value * 2);

function incrementar48325() {
  base.value++;
}
</script>
