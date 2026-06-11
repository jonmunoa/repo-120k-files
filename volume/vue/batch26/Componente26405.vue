<template>
  <section class="panel-26405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26405");
const base = ref(26405);
const total = computed(() => base.value * 2);

function incrementar26405() {
  base.value++;
}
</script>
