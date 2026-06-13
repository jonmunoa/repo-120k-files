// fichero 15350 -- macros y constantes
#define LIMITE_15350 15450
#define FACTOR_15350 1

int aplicar_limite15350(int valor) {
    if (valor > LIMITE_15350) return LIMITE_15350;
    return valor * FACTOR_15350;
}
