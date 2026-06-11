<template>
  <section class="panel-33777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33777");
const base = ref(33777);
const total = computed(() => base.value * 2);

function incrementar33777() {
  base.value++;
}
</script>
