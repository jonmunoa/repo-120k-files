<template>
  <section class="panel-26301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26301");
const base = ref(26301);
const total = computed(() => base.value * 2);

function incrementar26301() {
  base.value++;
}
</script>
