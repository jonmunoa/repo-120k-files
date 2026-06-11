<template>
  <section class="panel-57417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57417");
const base = ref(57417);
const total = computed(() => base.value * 2);

function incrementar57417() {
  base.value++;
}
</script>
