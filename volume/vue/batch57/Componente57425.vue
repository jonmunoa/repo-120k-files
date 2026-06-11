<template>
  <section class="panel-57425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57425");
const base = ref(57425);
const total = computed(() => base.value * 2);

function incrementar57425() {
  base.value++;
}
</script>
