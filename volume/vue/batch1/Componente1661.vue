<template>
  <section class="panel-1661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1661");
const base = ref(1661);
const total = computed(() => base.value * 2);

function incrementar1661() {
  base.value++;
}
</script>
