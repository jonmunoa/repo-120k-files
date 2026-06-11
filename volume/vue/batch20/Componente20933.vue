<template>
  <section class="panel-20933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20933");
const base = ref(20933);
const total = computed(() => base.value * 2);

function incrementar20933() {
  base.value++;
}
</script>
