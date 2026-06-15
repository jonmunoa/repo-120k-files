// fichero 45250 -- macros y constantes -- MODIFICADO
#define LIMITE_45250 45450
#define FACTOR_45250 2

int aplicar_limite45250(int valor) {
    if (valor > LIMITE_45250) return LIMITE_45250;
    return valor * FACTOR_45250;
}
