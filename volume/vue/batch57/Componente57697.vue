<template>
  <section class="panel-57697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57697");
const base = ref(57697);
const total = computed(() => base.value * 2);

function incrementar57697() {
  base.value++;
}
</script>
