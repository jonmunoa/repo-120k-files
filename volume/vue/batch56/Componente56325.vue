<template>
  <section class="panel-56325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56325");
const base = ref(56325);
const total = computed(() => base.value * 2);

function incrementar56325() {
  base.value++;
}
</script>
