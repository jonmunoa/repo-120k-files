<template>
  <section class="panel-41293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41293");
const base = ref(41293);
const total = computed(() => base.value * 2);

function incrementar41293() {
  base.value++;
}
</script>
