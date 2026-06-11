<template>
  <section class="panel-56945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56945");
const base = ref(56945);
const total = computed(() => base.value * 2);

function incrementar56945() {
  base.value++;
}
</script>
