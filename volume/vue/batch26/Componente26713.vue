<template>
  <section class="panel-26713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26713");
const base = ref(26713);
const total = computed(() => base.value * 2);

function incrementar26713() {
  base.value++;
}
</script>
