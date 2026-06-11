<template>
  <section class="panel-57833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57833");
const base = ref(57833);
const total = computed(() => base.value * 2);

function incrementar57833() {
  base.value++;
}
</script>
