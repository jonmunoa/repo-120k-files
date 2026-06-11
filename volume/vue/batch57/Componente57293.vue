<template>
  <section class="panel-57293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57293");
const base = ref(57293);
const total = computed(() => base.value * 2);

function incrementar57293() {
  base.value++;
}
</script>
