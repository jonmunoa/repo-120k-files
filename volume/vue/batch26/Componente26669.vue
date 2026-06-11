<template>
  <section class="panel-26669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26669");
const base = ref(26669);
const total = computed(() => base.value * 2);

function incrementar26669() {
  base.value++;
}
</script>
