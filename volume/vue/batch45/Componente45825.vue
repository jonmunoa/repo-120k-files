<template>
  <section class="panel-45825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45825");
const base = ref(45825);
const total = computed(() => base.value * 2);

function incrementar45825() {
  base.value++;
}
</script>
