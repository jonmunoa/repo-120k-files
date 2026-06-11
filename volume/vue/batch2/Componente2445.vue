<template>
  <section class="panel-2445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2445");
const base = ref(2445);
const total = computed(() => base.value * 2);

function incrementar2445() {
  base.value++;
}
</script>
