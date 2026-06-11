<template>
  <section class="panel-26853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26853");
const base = ref(26853);
const total = computed(() => base.value * 2);

function incrementar26853() {
  base.value++;
}
</script>
