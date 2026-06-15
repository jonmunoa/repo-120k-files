// fichero 33654 -- macros y constantes -- MODIFICADO
#define LIMITE_33654 33854
#define FACTOR_33654 6

int aplicar_limite33654(int valor) {
    if (valor > LIMITE_33654) return LIMITE_33654;
    return valor * FACTOR_33654;
}
