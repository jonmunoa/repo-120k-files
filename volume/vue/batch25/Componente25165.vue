<template>
  <section class="panel-25165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25165");
const base = ref(25165);
const total = computed(() => base.value * 2);

function incrementar25165() {
  base.value++;
}
</script>
