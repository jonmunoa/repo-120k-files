<template>
  <section class="panel-7293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7293");
const base = ref(7293);
const total = computed(() => base.value * 2);

function incrementar7293() {
  base.value++;
}
</script>
