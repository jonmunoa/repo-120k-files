<template>
  <section class="panel-26665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26665");
const base = ref(26665);
const total = computed(() => base.value * 2);

function incrementar26665() {
  base.value++;
}
</script>
