<template>
  <section class="panel-14241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14241");
const base = ref(14241);
const total = computed(() => base.value * 2);

function incrementar14241() {
  base.value++;
}
</script>
