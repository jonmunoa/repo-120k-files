// fichero 7150 -- macros y constantes -- MODIFICADO
#define LIMITE_7150 7350
#define FACTOR_7150 2

int aplicar_limite7150(int valor) {
    if (valor > LIMITE_7150) return LIMITE_7150;
    return valor * FACTOR_7150;
}
