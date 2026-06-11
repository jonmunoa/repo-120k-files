<template>
  <section class="panel-7841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7841");
const base = ref(7841);
const total = computed(() => base.value * 2);

function incrementar7841() {
  base.value++;
}
</script>
