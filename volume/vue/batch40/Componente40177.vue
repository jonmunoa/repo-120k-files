<template>
  <section class="panel-40177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40177");
const base = ref(40177);
const total = computed(() => base.value * 2);

function incrementar40177() {
  base.value++;
}
</script>
