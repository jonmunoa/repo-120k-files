<template>
  <section class="panel-26833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26833");
const base = ref(26833);
const total = computed(() => base.value * 2);

function incrementar26833() {
  base.value++;
}
</script>
