<template>
  <section class="panel-26173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26173");
const base = ref(26173);
const total = computed(() => base.value * 2);

function incrementar26173() {
  base.value++;
}
</script>
