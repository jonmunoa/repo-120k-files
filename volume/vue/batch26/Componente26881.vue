<template>
  <section class="panel-26881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26881");
const base = ref(26881);
const total = computed(() => base.value * 2);

function incrementar26881() {
  base.value++;
}
</script>
