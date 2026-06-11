<template>
  <section class="panel-177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 177");
const base = ref(177);
const total = computed(() => base.value * 2);

function incrementar177() {
  base.value++;
}
</script>
