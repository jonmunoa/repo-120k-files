<template>
  <section class="panel-26521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26521");
const base = ref(26521);
const total = computed(() => base.value * 2);

function incrementar26521() {
  base.value++;
}
</script>
