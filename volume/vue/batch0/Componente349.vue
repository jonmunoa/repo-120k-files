<template>
  <section class="panel-349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 349");
const base = ref(349);
const total = computed(() => base.value * 2);

function incrementar349() {
  base.value++;
}
</script>
