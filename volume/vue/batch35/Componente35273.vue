<template>
  <section class="panel-35273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35273");
const base = ref(35273);
const total = computed(() => base.value * 2);

function incrementar35273() {
  base.value++;
}
</script>
