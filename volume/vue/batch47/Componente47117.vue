<template>
  <section class="panel-47117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47117");
const base = ref(47117);
const total = computed(() => base.value * 2);

function incrementar47117() {
  base.value++;
}
</script>
