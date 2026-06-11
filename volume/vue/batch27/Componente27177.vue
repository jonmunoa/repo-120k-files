<template>
  <section class="panel-27177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27177");
const base = ref(27177);
const total = computed(() => base.value * 2);

function incrementar27177() {
  base.value++;
}
</script>
