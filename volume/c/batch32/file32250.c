// fichero 32250 -- macros y constantes -- MODIFICADO
#define LIMITE_32250 32450
#define FACTOR_32250 2

int aplicar_limite32250(int valor) {
    if (valor > LIMITE_32250) return LIMITE_32250;
    return valor * FACTOR_32250;
}
