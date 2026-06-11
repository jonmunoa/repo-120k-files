<template>
  <section class="panel-11293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11293");
const base = ref(11293);
const total = computed(() => base.value * 2);

function incrementar11293() {
  base.value++;
}
</script>
