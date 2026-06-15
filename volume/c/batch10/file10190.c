// fichero 10190 -- macros y constantes -- MODIFICADO
#define LIMITE_10190 10390
#define FACTOR_10190 2

int aplicar_limite10190(int valor) {
    if (valor > LIMITE_10190) return LIMITE_10190;
    return valor * FACTOR_10190;
}
