<template>
  <section class="panel-26205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26205");
const base = ref(26205);
const total = computed(() => base.value * 2);

function incrementar26205() {
  base.value++;
}
</script>
