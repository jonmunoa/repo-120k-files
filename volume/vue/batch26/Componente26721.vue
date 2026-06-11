<template>
  <section class="panel-26721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26721");
const base = ref(26721);
const total = computed(() => base.value * 2);

function incrementar26721() {
  base.value++;
}
</script>
