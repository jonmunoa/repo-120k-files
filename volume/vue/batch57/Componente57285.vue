<template>
  <section class="panel-57285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57285");
const base = ref(57285);
const total = computed(() => base.value * 2);

function incrementar57285() {
  base.value++;
}
</script>
