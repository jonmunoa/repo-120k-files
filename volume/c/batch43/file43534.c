// fichero 43534 -- macros y constantes -- MODIFICADO
#define LIMITE_43534 43734
#define FACTOR_43534 6

int aplicar_limite43534(int valor) {
    if (valor > LIMITE_43534) return LIMITE_43534;
    return valor * FACTOR_43534;
}
