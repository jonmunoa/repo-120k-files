<template>
  <section class="panel-37117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37117");
const base = ref(37117);
const total = computed(() => base.value * 2);

function incrementar37117() {
  base.value++;
}
</script>
