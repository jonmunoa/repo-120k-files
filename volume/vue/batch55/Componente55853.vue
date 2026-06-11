<template>
  <section class="panel-55853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55853");
const base = ref(55853);
const total = computed(() => base.value * 2);

function incrementar55853() {
  base.value++;
}
</script>
