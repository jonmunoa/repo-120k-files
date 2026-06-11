<template>
  <section class="panel-10329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10329");
const base = ref(10329);
const total = computed(() => base.value * 2);

function incrementar10329() {
  base.value++;
}
</script>
