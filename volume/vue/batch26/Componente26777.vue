<template>
  <section class="panel-26777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26777");
const base = ref(26777);
const total = computed(() => base.value * 2);

function incrementar26777() {
  base.value++;
}
</script>
