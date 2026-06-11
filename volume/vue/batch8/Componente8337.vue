<template>
  <section class="panel-8337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8337");
const base = ref(8337);
const total = computed(() => base.value * 2);

function incrementar8337() {
  base.value++;
}
</script>
