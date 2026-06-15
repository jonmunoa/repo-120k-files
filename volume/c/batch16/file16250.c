// fichero 16250 -- macros y constantes -- MODIFICADO
#define LIMITE_16250 16450
#define FACTOR_16250 2

int aplicar_limite16250(int valor) {
    if (valor > LIMITE_16250) return LIMITE_16250;
    return valor * FACTOR_16250;
}
