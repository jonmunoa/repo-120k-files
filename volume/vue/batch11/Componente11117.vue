<template>
  <section class="panel-11117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11117");
const base = ref(11117);
const total = computed(() => base.value * 2);

function incrementar11117() {
  base.value++;
}
</script>
