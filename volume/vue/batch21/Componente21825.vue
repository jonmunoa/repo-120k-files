<template>
  <section class="panel-21825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21825");
const base = ref(21825);
const total = computed(() => base.value * 2);

function incrementar21825() {
  base.value++;
}
</script>
