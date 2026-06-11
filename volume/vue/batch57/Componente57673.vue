<template>
  <section class="panel-57673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57673");
const base = ref(57673);
const total = computed(() => base.value * 2);

function incrementar57673() {
  base.value++;
}
</script>
