<template>
  <section class="panel-57025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57025");
const base = ref(57025);
const total = computed(() => base.value * 2);

function incrementar57025() {
  base.value++;
}
</script>
