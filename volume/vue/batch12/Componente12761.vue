<template>
  <section class="panel-12761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12761");
const base = ref(12761);
const total = computed(() => base.value * 2);

function incrementar12761() {
  base.value++;
}
</script>
