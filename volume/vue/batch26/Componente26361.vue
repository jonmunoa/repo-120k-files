<template>
  <section class="panel-26361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26361");
const base = ref(26361);
const total = computed(() => base.value * 2);

function incrementar26361() {
  base.value++;
}
</script>
