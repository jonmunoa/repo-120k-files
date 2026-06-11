<template>
  <section class="panel-57669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57669");
const base = ref(57669);
const total = computed(() => base.value * 2);

function incrementar57669() {
  base.value++;
}
</script>
