<template>
  <section class="panel-3293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3293");
const base = ref(3293);
const total = computed(() => base.value * 2);

function incrementar3293() {
  base.value++;
}
</script>
