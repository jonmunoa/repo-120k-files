// fichero 34030 -- macros y constantes
#define LIMITE_34030 34130
#define FACTOR_34030 1

int aplicar_limite34030(int valor) {
    if (valor > LIMITE_34030) return LIMITE_34030;
    return valor * FACTOR_34030;
}
