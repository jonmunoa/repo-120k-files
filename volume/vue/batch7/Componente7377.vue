<template>
  <section class="panel-7377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7377");
const base = ref(7377);
const total = computed(() => base.value * 2);

function incrementar7377() {
  base.value++;
}
</script>
