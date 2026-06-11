<template>
  <section class="panel-21777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21777");
const base = ref(21777);
const total = computed(() => base.value * 2);

function incrementar21777() {
  base.value++;
}
</script>
