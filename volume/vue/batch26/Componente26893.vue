<template>
  <section class="panel-26893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26893");
const base = ref(26893);
const total = computed(() => base.value * 2);

function incrementar26893() {
  base.value++;
}
</script>
