<template>
  <section class="panel-33293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33293");
const base = ref(33293);
const total = computed(() => base.value * 2);

function incrementar33293() {
  base.value++;
}
</script>
