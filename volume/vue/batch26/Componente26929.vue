<template>
  <section class="panel-26929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26929");
const base = ref(26929);
const total = computed(() => base.value * 2);

function incrementar26929() {
  base.value++;
}
</script>
