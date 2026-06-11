<template>
  <section class="panel-57757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57757");
const base = ref(57757);
const total = computed(() => base.value * 2);

function incrementar57757() {
  base.value++;
}
</script>
