<template>
  <section class="panel-26541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26541");
const base = ref(26541);
const total = computed(() => base.value * 2);

function incrementar26541() {
  base.value++;
}
</script>
