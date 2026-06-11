<template>
  <section class="panel-38825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38825");
const base = ref(38825);
const total = computed(() => base.value * 2);

function incrementar38825() {
  base.value++;
}
</script>
