<template>
  <section class="panel-45661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45661");
const base = ref(45661);
const total = computed(() => base.value * 2);

function incrementar45661() {
  base.value++;
}
</script>
