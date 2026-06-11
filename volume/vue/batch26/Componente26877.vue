<template>
  <section class="panel-26877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26877");
const base = ref(26877);
const total = computed(() => base.value * 2);

function incrementar26877() {
  base.value++;
}
</script>
