<template>
  <section class="panel-26509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26509");
const base = ref(26509);
const total = computed(() => base.value * 2);

function incrementar26509() {
  base.value++;
}
</script>
