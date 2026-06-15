// fichero 2190 -- macros y constantes -- MODIFICADO
#define LIMITE_2190 2390
#define FACTOR_2190 2

int aplicar_limite2190(int valor) {
    if (valor > LIMITE_2190) return LIMITE_2190;
    return valor * FACTOR_2190;
}
