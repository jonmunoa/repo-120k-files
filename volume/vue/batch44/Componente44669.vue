<template>
  <section class="panel-44669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44669");
const base = ref(44669);
const total = computed(() => base.value * 2);

function incrementar44669() {
  base.value++;
}
</script>
