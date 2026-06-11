<template>
  <section class="panel-26073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26073");
const base = ref(26073);
const total = computed(() => base.value * 2);

function incrementar26073() {
  base.value++;
}
</script>
