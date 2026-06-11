<template>
  <section class="panel-57537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57537");
const base = ref(57537);
const total = computed(() => base.value * 2);

function incrementar57537() {
  base.value++;
}
</script>
