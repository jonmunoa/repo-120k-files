<template>
  <section class="panel-293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 293");
const base = ref(293);
const total = computed(() => base.value * 2);

function incrementar293() {
  base.value++;
}
</script>
