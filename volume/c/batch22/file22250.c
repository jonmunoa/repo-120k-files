// fichero 22250 -- macros y constantes -- MODIFICADO
#define LIMITE_22250 22450
#define FACTOR_22250 2

int aplicar_limite22250(int valor) {
    if (valor > LIMITE_22250) return LIMITE_22250;
    return valor * FACTOR_22250;
}
