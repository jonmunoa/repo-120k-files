// fichero 4190 -- macros y constantes -- MODIFICADO
#define LIMITE_4190 4390
#define FACTOR_4190 2

int aplicar_limite4190(int valor) {
    if (valor > LIMITE_4190) return LIMITE_4190;
    return valor * FACTOR_4190;
}
