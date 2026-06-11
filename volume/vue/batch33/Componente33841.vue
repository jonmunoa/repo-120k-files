<template>
  <section class="panel-33841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33841");
const base = ref(33841);
const total = computed(() => base.value * 2);

function incrementar33841() {
  base.value++;
}
</script>
