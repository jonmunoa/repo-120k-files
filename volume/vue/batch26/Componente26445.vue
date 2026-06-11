<template>
  <section class="panel-26445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26445");
const base = ref(26445);
const total = computed(() => base.value * 2);

function incrementar26445() {
  base.value++;
}
</script>
