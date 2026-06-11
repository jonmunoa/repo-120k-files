<template>
  <section class="panel-45293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45293");
const base = ref(45293);
const total = computed(() => base.value * 2);

function incrementar45293() {
  base.value++;
}
</script>
