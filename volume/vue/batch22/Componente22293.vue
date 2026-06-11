<template>
  <section class="panel-22293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22293");
const base = ref(22293);
const total = computed(() => base.value * 2);

function incrementar22293() {
  base.value++;
}
</script>
