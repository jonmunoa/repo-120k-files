<template>
  <section class="panel-12221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12221");
const base = ref(12221);
const total = computed(() => base.value * 2);

function incrementar12221() {
  base.value++;
}
</script>
