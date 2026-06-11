<template>
  <section class="panel-26489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26489");
const base = ref(26489);
const total = computed(() => base.value * 2);

function incrementar26489() {
  base.value++;
}
</script>
