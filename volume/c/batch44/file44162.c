// fichero 44162 -- macros y constantes
#define LIMITE_44162 44262
#define FACTOR_44162 3

int aplicar_limite44162(int valor) {
    if (valor > LIMITE_44162) return LIMITE_44162;
    return valor * FACTOR_44162;
}
