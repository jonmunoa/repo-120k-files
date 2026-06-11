<template>
  <section class="panel-14825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14825");
const base = ref(14825);
const total = computed(() => base.value * 2);

function incrementar14825() {
  base.value++;
}
</script>
