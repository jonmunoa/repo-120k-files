<template>
  <section class="panel-44857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44857");
const base = ref(44857);
const total = computed(() => base.value * 2);

function incrementar44857() {
  base.value++;
}
</script>
