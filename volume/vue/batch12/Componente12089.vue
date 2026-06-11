<template>
  <section class="panel-12089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12089");
const base = ref(12089);
const total = computed(() => base.value * 2);

function incrementar12089() {
  base.value++;
}
</script>
