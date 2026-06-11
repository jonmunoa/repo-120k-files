<template>
  <section class="panel-4841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4841");
const base = ref(4841);
const total = computed(() => base.value * 2);

function incrementar4841() {
  base.value++;
}
</script>
