<template>
  <section class="panel-26153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26153");
const base = ref(26153);
const total = computed(() => base.value * 2);

function incrementar26153() {
  base.value++;
}
</script>
