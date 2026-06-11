<template>
  <section class="panel-825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 825");
const base = ref(825);
const total = computed(() => base.value * 2);

function incrementar825() {
  base.value++;
}
</script>
