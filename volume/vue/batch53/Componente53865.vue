<template>
  <section class="panel-53865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53865");
const base = ref(53865);
const total = computed(() => base.value * 2);

function incrementar53865() {
  base.value++;
}
</script>
