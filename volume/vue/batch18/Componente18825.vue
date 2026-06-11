<template>
  <section class="panel-18825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18825");
const base = ref(18825);
const total = computed(() => base.value * 2);

function incrementar18825() {
  base.value++;
}
</script>
