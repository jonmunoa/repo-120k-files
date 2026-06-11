<template>
  <section class="panel-6377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6377");
const base = ref(6377);
const total = computed(() => base.value * 2);

function incrementar6377() {
  base.value++;
}
</script>
