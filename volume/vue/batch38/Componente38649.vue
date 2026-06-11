<template>
  <section class="panel-38649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38649");
const base = ref(38649);
const total = computed(() => base.value * 2);

function incrementar38649() {
  base.value++;
}
</script>
