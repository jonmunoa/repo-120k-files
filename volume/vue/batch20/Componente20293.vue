<template>
  <section class="panel-20293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20293");
const base = ref(20293);
const total = computed(() => base.value * 2);

function incrementar20293() {
  base.value++;
}
</script>
