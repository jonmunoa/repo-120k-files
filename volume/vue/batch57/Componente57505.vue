<template>
  <section class="panel-57505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57505");
const base = ref(57505);
const total = computed(() => base.value * 2);

function incrementar57505() {
  base.value++;
}
</script>
