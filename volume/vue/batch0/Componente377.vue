<template>
  <section class="panel-377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 377");
const base = ref(377);
const total = computed(() => base.value * 2);

function incrementar377() {
  base.value++;
}
</script>
