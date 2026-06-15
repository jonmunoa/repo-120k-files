// fichero 26190 -- macros y constantes -- MODIFICADO
#define LIMITE_26190 26390
#define FACTOR_26190 2

int aplicar_limite26190(int valor) {
    if (valor > LIMITE_26190) return LIMITE_26190;
    return valor * FACTOR_26190;
}
