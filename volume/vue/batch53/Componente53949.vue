<template>
  <section class="panel-53949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53949");
const base = ref(53949);
const total = computed(() => base.value * 2);

function incrementar53949() {
  base.value++;
}
</script>
