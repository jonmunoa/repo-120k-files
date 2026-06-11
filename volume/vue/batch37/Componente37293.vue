<template>
  <section class="panel-37293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37293");
const base = ref(37293);
const total = computed(() => base.value * 2);

function incrementar37293() {
  base.value++;
}
</script>
