<template>
  <section class="panel-22489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22489");
const base = ref(22489);
const total = computed(() => base.value * 2);

function incrementar22489() {
  base.value++;
}
</script>
