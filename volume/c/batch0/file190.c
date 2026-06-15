// fichero 190 -- macros y constantes -- MODIFICADO
#define LIMITE_190 390
#define FACTOR_190 2

int aplicar_limite190(int valor) {
    if (valor > LIMITE_190) return LIMITE_190;
    return valor * FACTOR_190;
}
