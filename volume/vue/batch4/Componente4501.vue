<template>
  <section class="panel-4501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4501");
const base = ref(4501);
const total = computed(() => base.value * 2);

function incrementar4501() {
  base.value++;
}
</script>
