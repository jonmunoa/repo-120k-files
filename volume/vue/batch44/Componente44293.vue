<template>
  <section class="panel-44293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44293");
const base = ref(44293);
const total = computed(() => base.value * 2);

function incrementar44293() {
  base.value++;
}
</script>
