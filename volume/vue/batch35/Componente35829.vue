<template>
  <section class="panel-35829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35829");
const base = ref(35829);
const total = computed(() => base.value * 2);

function incrementar35829() {
  base.value++;
}
</script>
