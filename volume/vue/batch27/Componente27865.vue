<template>
  <section class="panel-27865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27865");
const base = ref(27865);
const total = computed(() => base.value * 2);

function incrementar27865() {
  base.value++;
}
</script>
