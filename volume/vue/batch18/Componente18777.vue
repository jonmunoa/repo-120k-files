<template>
  <section class="panel-18777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18777");
const base = ref(18777);
const total = computed(() => base.value * 2);

function incrementar18777() {
  base.value++;
}
</script>
