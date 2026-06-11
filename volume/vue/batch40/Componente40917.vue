<template>
  <section class="panel-40917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40917");
const base = ref(40917);
const total = computed(() => base.value * 2);

function incrementar40917() {
  base.value++;
}
</script>
