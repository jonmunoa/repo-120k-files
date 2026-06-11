<template>
  <section class="panel-20145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20145");
const base = ref(20145);
const total = computed(() => base.value * 2);

function incrementar20145() {
  base.value++;
}
</script>
