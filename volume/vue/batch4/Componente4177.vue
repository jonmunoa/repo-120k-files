<template>
  <section class="panel-4177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4177");
const base = ref(4177);
const total = computed(() => base.value * 2);

function incrementar4177() {
  base.value++;
}
</script>
