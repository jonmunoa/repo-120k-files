<template>
  <section class="panel-26817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26817");
const base = ref(26817);
const total = computed(() => base.value * 2);

function incrementar26817() {
  base.value++;
}
</script>
