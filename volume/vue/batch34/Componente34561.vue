<template>
  <section class="panel-34561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34561");
const base = ref(34561);
const total = computed(() => base.value * 2);

function incrementar34561() {
  base.value++;
}
</script>
