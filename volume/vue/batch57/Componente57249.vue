<template>
  <section class="panel-57249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57249");
const base = ref(57249);
const total = computed(() => base.value * 2);

function incrementar57249() {
  base.value++;
}
</script>
