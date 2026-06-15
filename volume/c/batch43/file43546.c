// fichero 43546 -- macros y constantes -- MODIFICADO
#define LIMITE_43546 43746
#define FACTOR_43546 3

int aplicar_limite43546(int valor) {
    if (valor > LIMITE_43546) return LIMITE_43546;
    return valor * FACTOR_43546;
}
