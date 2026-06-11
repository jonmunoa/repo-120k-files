<template>
  <section class="panel-8777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8777");
const base = ref(8777);
const total = computed(() => base.value * 2);

function incrementar8777() {
  base.value++;
}
</script>
