<template>
  <section class="panel-26689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26689");
const base = ref(26689);
const total = computed(() => base.value * 2);

function incrementar26689() {
  base.value++;
}
</script>
