<template>
  <section class="panel-53813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53813");
const base = ref(53813);
const total = computed(() => base.value * 2);

function incrementar53813() {
  base.value++;
}
</script>
