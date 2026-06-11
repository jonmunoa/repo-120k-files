<template>
  <section class="panel-36841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36841");
const base = ref(36841);
const total = computed(() => base.value * 2);

function incrementar36841() {
  base.value++;
}
</script>
