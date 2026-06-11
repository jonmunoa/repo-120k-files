<template>
  <section class="panel-16325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16325");
const base = ref(16325);
const total = computed(() => base.value * 2);

function incrementar16325() {
  base.value++;
}
</script>
