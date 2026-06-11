<template>
  <section class="panel-22377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22377");
const base = ref(22377);
const total = computed(() => base.value * 2);

function incrementar22377() {
  base.value++;
}
</script>
