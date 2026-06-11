<template>
  <section class="panel-26021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26021");
const base = ref(26021);
const total = computed(() => base.value * 2);

function incrementar26021() {
  base.value++;
}
</script>
