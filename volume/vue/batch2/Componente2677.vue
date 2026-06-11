<template>
  <section class="panel-2677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2677");
const base = ref(2677);
const total = computed(() => base.value * 2);

function incrementar2677() {
  base.value++;
}
</script>
