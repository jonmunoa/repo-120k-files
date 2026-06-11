<template>
  <section class="panel-50361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50361");
const base = ref(50361);
const total = computed(() => base.value * 2);

function incrementar50361() {
  base.value++;
}
</script>
