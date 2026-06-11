<template>
  <section class="panel-26677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26677");
const base = ref(26677);
const total = computed(() => base.value * 2);

function incrementar26677() {
  base.value++;
}
</script>
