// fichero 29250 -- macros y constantes -- MODIFICADO
#define LIMITE_29250 29450
#define FACTOR_29250 2

int aplicar_limite29250(int valor) {
    if (valor > LIMITE_29250) return LIMITE_29250;
    return valor * FACTOR_29250;
}
