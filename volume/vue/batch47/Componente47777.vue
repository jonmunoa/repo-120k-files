<template>
  <section class="panel-47777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47777");
const base = ref(47777);
const total = computed(() => base.value * 2);

function incrementar47777() {
  base.value++;
}
</script>
