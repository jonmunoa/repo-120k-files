// fichero 44954 -- macros y constantes -- MODIFICADO
#define LIMITE_44954 45154
#define FACTOR_44954 6

int aplicar_limite44954(int valor) {
    if (valor > LIMITE_44954) return LIMITE_44954;
    return valor * FACTOR_44954;
}
