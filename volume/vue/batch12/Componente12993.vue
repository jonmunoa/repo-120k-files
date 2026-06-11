<template>
  <section class="panel-12993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12993");
const base = ref(12993);
const total = computed(() => base.value * 2);

function incrementar12993() {
  base.value++;
}
</script>
