<template>
  <section class="panel-54661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54661");
const base = ref(54661);
const total = computed(() => base.value * 2);

function incrementar54661() {
  base.value++;
}
</script>
