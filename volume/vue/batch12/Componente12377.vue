<template>
  <section class="panel-12377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12377");
const base = ref(12377);
const total = computed(() => base.value * 2);

function incrementar12377() {
  base.value++;
}
</script>
