<template>
  <section class="panel-57933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57933");
const base = ref(57933);
const total = computed(() => base.value * 2);

function incrementar57933() {
  base.value++;
}
</script>
