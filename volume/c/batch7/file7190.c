// fichero 7190 -- macros y constantes -- MODIFICADO
#define LIMITE_7190 7390
#define FACTOR_7190 2

int aplicar_limite7190(int valor) {
    if (valor > LIMITE_7190) return LIMITE_7190;
    return valor * FACTOR_7190;
}
