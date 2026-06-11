<template>
  <section class="panel-57173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57173");
const base = ref(57173);
const total = computed(() => base.value * 2);

function incrementar57173() {
  base.value++;
}
</script>
