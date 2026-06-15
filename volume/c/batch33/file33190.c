// fichero 33190 -- macros y constantes -- MODIFICADO
#define LIMITE_33190 33390
#define FACTOR_33190 2

int aplicar_limite33190(int valor) {
    if (valor > LIMITE_33190) return LIMITE_33190;
    return valor * FACTOR_33190;
}
