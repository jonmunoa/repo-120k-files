<template>
  <section class="panel-57561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57561");
const base = ref(57561);
const total = computed(() => base.value * 2);

function incrementar57561() {
  base.value++;
}
</script>
