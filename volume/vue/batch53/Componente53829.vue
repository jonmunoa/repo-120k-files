<template>
  <section class="panel-53829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53829");
const base = ref(53829);
const total = computed(() => base.value * 2);

function incrementar53829() {
  base.value++;
}
</script>
