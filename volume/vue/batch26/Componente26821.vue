<template>
  <section class="panel-26821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26821");
const base = ref(26821);
const total = computed(() => base.value * 2);

function incrementar26821() {
  base.value++;
}
</script>
