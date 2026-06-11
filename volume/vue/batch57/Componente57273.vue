<template>
  <section class="panel-57273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57273");
const base = ref(57273);
const total = computed(() => base.value * 2);

function incrementar57273() {
  base.value++;
}
</script>
