<template>
  <section class="panel-22945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22945");
const base = ref(22945);
const total = computed(() => base.value * 2);

function incrementar22945() {
  base.value++;
}
</script>
