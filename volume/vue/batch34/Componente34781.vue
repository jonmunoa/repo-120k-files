<template>
  <section class="panel-34781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34781");
const base = ref(34781);
const total = computed(() => base.value * 2);

function incrementar34781() {
  base.value++;
}
</script>
