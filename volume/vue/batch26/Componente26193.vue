<template>
  <section class="panel-26193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26193");
const base = ref(26193);
const total = computed(() => base.value * 2);

function incrementar26193() {
  base.value++;
}
</script>
