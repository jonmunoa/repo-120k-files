<template>
  <section class="panel-3661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3661");
const base = ref(3661);
const total = computed(() => base.value * 2);

function incrementar3661() {
  base.value++;
}
</script>
