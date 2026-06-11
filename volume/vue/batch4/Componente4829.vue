<template>
  <section class="panel-4829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4829");
const base = ref(4829);
const total = computed(() => base.value * 2);

function incrementar4829() {
  base.value++;
}
</script>
