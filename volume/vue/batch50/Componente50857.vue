<template>
  <section class="panel-50857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50857");
const base = ref(50857);
const total = computed(() => base.value * 2);

function incrementar50857() {
  base.value++;
}
</script>
