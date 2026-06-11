<template>
  <section class="panel-26377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26377");
const base = ref(26377);
const total = computed(() => base.value * 2);

function incrementar26377() {
  base.value++;
}
</script>
