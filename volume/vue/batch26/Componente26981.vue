<template>
  <section class="panel-26981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26981");
const base = ref(26981);
const total = computed(() => base.value * 2);

function incrementar26981() {
  base.value++;
}
</script>
