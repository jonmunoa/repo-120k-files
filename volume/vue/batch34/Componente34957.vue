<template>
  <section class="panel-34957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34957");
const base = ref(34957);
const total = computed(() => base.value * 2);

function incrementar34957() {
  base.value++;
}
</script>
