<template>
  <section class="panel-7857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7857");
const base = ref(7857);
const total = computed(() => base.value * 2);

function incrementar7857() {
  base.value++;
}
</script>
