<template>
  <section class="panel-7329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7329");
const base = ref(7329);
const total = computed(() => base.value * 2);

function incrementar7329() {
  base.value++;
}
</script>
