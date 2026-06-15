// fichero 28190 -- macros y constantes -- MODIFICADO
#define LIMITE_28190 28390
#define FACTOR_28190 2

int aplicar_limite28190(int valor) {
    if (valor > LIMITE_28190) return LIMITE_28190;
    return valor * FACTOR_28190;
}
