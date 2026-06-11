<template>
  <section class="panel-26773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26773");
const base = ref(26773);
const total = computed(() => base.value * 2);

function incrementar26773() {
  base.value++;
}
</script>
