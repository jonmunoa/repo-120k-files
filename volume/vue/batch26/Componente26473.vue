<template>
  <section class="panel-26473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26473");
const base = ref(26473);
const total = computed(() => base.value * 2);

function incrementar26473() {
  base.value++;
}
</script>
