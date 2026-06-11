<template>
  <section class="panel-26601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26601");
const base = ref(26601);
const total = computed(() => base.value * 2);

function incrementar26601() {
  base.value++;
}
</script>
