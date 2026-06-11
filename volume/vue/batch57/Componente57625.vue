<template>
  <section class="panel-57625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57625");
const base = ref(57625);
const total = computed(() => base.value * 2);

function incrementar57625() {
  base.value++;
}
</script>
