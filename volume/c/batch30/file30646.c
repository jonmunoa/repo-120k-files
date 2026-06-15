// fichero 30646 -- macros y constantes -- MODIFICADO
#define LIMITE_30646 30846
#define FACTOR_30646 3

int aplicar_limite30646(int valor) {
    if (valor > LIMITE_30646) return LIMITE_30646;
    return valor * FACTOR_30646;
}
