<template>
  <section class="panel-8933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8933");
const base = ref(8933);
const total = computed(() => base.value * 2);

function incrementar8933() {
  base.value++;
}
</script>
