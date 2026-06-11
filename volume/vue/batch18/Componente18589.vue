<template>
  <section class="panel-18589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18589");
const base = ref(18589);
const total = computed(() => base.value * 2);

function incrementar18589() {
  base.value++;
}
</script>
