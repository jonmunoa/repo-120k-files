// fichero 22770 -- macros y constantes
#define LIMITE_22770 22870
#define FACTOR_22770 1

int aplicar_limite22770(int valor) {
    if (valor > LIMITE_22770) return LIMITE_22770;
    return valor * FACTOR_22770;
}
