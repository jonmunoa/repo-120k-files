<template>
  <section class="panel-55377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55377");
const base = ref(55377);
const total = computed(() => base.value * 2);

function incrementar55377() {
  base.value++;
}
</script>
