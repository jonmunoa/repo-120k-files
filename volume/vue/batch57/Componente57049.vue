<template>
  <section class="panel-57049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57049");
const base = ref(57049);
const total = computed(() => base.value * 2);

function incrementar57049() {
  base.value++;
}
</script>
