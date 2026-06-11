<template>
  <section class="panel-41577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41577");
const base = ref(41577);
const total = computed(() => base.value * 2);

function incrementar41577() {
  base.value++;
}
</script>
