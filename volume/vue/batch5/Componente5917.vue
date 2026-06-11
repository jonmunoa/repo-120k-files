<template>
  <section class="panel-5917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5917");
const base = ref(5917);
const total = computed(() => base.value * 2);

function incrementar5917() {
  base.value++;
}
</script>
