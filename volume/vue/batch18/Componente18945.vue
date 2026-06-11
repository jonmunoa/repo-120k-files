<template>
  <section class="panel-18945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18945");
const base = ref(18945);
const total = computed(() => base.value * 2);

function incrementar18945() {
  base.value++;
}
</script>
