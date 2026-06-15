// fichero 48518 -- macros y constantes -- MODIFICADO
#define LIMITE_48518 48718
#define FACTOR_48518 5

int aplicar_limite48518(int valor) {
    if (valor > LIMITE_48518) return LIMITE_48518;
    return valor * FACTOR_48518;
}
