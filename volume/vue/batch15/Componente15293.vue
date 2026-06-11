<template>
  <section class="panel-15293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15293");
const base = ref(15293);
const total = computed(() => base.value * 2);

function incrementar15293() {
  base.value++;
}
</script>
