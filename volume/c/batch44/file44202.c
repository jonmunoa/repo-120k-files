// fichero 44202 -- macros y constantes
#define LIMITE_44202 44302
#define FACTOR_44202 3

int aplicar_limite44202(int valor) {
    if (valor > LIMITE_44202) return LIMITE_44202;
    return valor * FACTOR_44202;
}
