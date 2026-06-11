<template>
  <section class="panel-12513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12513");
const base = ref(12513);
const total = computed(() => base.value * 2);

function incrementar12513() {
  base.value++;
}
</script>
