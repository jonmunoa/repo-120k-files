<template>
  <section class="panel-45349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45349");
const base = ref(45349);
const total = computed(() => base.value * 2);

function incrementar45349() {
  base.value++;
}
</script>
