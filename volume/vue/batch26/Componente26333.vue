<template>
  <section class="panel-26333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26333");
const base = ref(26333);
const total = computed(() => base.value * 2);

function incrementar26333() {
  base.value++;
}
</script>
