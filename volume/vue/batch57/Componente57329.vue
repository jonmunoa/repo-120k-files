<template>
  <section class="panel-57329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57329");
const base = ref(57329);
const total = computed(() => base.value * 2);

function incrementar57329() {
  base.value++;
}
</script>
