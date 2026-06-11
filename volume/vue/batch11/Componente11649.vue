<template>
  <section class="panel-11649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11649");
const base = ref(11649);
const total = computed(() => base.value * 2);

function incrementar11649() {
  base.value++;
}
</script>
