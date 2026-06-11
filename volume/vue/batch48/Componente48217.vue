<template>
  <section class="panel-48217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48217");
const base = ref(48217);
const total = computed(() => base.value * 2);

function incrementar48217() {
  base.value++;
}
</script>
