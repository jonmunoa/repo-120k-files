<template>
  <section class="panel-12825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12825");
const base = ref(12825);
const total = computed(() => base.value * 2);

function incrementar12825() {
  base.value++;
}
</script>
