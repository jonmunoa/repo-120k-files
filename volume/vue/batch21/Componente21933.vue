<template>
  <section class="panel-21933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21933");
const base = ref(21933);
const total = computed(() => base.value * 2);

function incrementar21933() {
  base.value++;
}
</script>
