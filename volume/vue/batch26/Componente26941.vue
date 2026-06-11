<template>
  <section class="panel-26941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26941");
const base = ref(26941);
const total = computed(() => base.value * 2);

function incrementar26941() {
  base.value++;
}
</script>
