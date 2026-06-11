<template>
  <section class="panel-22933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22933");
const base = ref(22933);
const total = computed(() => base.value * 2);

function incrementar22933() {
  base.value++;
}
</script>
