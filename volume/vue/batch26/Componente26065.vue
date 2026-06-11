<template>
  <section class="panel-26065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26065");
const base = ref(26065);
const total = computed(() => base.value * 2);

function incrementar26065() {
  base.value++;
}
</script>
