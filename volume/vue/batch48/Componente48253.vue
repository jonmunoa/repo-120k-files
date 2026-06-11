<template>
  <section class="panel-48253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48253");
const base = ref(48253);
const total = computed(() => base.value * 2);

function incrementar48253() {
  base.value++;
}
</script>
