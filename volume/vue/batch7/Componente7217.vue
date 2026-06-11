<template>
  <section class="panel-7217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7217");
const base = ref(7217);
const total = computed(() => base.value * 2);

function incrementar7217() {
  base.value++;
}
</script>
