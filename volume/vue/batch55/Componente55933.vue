<template>
  <section class="panel-55933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55933");
const base = ref(55933);
const total = computed(() => base.value * 2);

function incrementar55933() {
  base.value++;
}
</script>
