<template>
  <section class="panel-19825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19825");
const base = ref(19825);
const total = computed(() => base.value * 2);

function incrementar19825() {
  base.value++;
}
</script>
