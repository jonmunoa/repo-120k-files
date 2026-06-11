<template>
  <section class="panel-12245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12245");
const base = ref(12245);
const total = computed(() => base.value * 2);

function incrementar12245() {
  base.value++;
}
</script>
