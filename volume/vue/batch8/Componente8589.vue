<template>
  <section class="panel-8589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8589");
const base = ref(8589);
const total = computed(() => base.value * 2);

function incrementar8589() {
  base.value++;
}
</script>
