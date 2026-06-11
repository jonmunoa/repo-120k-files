<template>
  <section class="panel-48649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48649");
const base = ref(48649);
const total = computed(() => base.value * 2);

function incrementar48649() {
  base.value++;
}
</script>
