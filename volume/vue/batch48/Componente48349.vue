<template>
  <section class="panel-48349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48349");
const base = ref(48349);
const total = computed(() => base.value * 2);

function incrementar48349() {
  base.value++;
}
</script>
