<template>
  <section class="panel-26905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26905");
const base = ref(26905);
const total = computed(() => base.value * 2);

function incrementar26905() {
  base.value++;
}
</script>
