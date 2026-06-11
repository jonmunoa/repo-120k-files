<template>
  <section class="panel-34841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34841");
const base = ref(34841);
const total = computed(() => base.value * 2);

function incrementar34841() {
  base.value++;
}
</script>
