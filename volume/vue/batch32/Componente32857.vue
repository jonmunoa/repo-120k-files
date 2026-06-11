<template>
  <section class="panel-32857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32857");
const base = ref(32857);
const total = computed(() => base.value * 2);

function incrementar32857() {
  base.value++;
}
</script>
