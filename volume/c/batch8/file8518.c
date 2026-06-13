// fichero 8518 -- macros y constantes
#define LIMITE_8518 8618
#define FACTOR_8518 4

int aplicar_limite8518(int valor) {
    if (valor > LIMITE_8518) return LIMITE_8518;
    return valor * FACTOR_8518;
}
