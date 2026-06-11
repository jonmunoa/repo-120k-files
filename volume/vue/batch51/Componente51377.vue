<template>
  <section class="panel-51377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51377");
const base = ref(51377);
const total = computed(() => base.value * 2);

function incrementar51377() {
  base.value++;
}
</script>
