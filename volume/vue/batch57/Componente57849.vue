<template>
  <section class="panel-57849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57849");
const base = ref(57849);
const total = computed(() => base.value * 2);

function incrementar57849() {
  base.value++;
}
</script>
