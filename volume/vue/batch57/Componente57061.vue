<template>
  <section class="panel-57061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57061");
const base = ref(57061);
const total = computed(() => base.value * 2);

function incrementar57061() {
  base.value++;
}
</script>
