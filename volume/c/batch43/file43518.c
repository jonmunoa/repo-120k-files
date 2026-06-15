// fichero 43518 -- macros y constantes -- MODIFICADO
#define LIMITE_43518 43718
#define FACTOR_43518 5

int aplicar_limite43518(int valor) {
    if (valor > LIMITE_43518) return LIMITE_43518;
    return valor * FACTOR_43518;
}
