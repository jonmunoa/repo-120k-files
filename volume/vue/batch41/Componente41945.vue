<template>
  <section class="panel-41945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41945");
const base = ref(41945);
const total = computed(() => base.value * 2);

function incrementar41945() {
  base.value++;
}
</script>
