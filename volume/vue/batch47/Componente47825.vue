<template>
  <section class="panel-47825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47825");
const base = ref(47825);
const total = computed(() => base.value * 2);

function incrementar47825() {
  base.value++;
}
</script>
