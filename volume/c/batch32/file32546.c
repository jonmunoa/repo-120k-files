// fichero 32546 -- macros y constantes -- MODIFICADO
#define LIMITE_32546 32746
#define FACTOR_32546 3

int aplicar_limite32546(int valor) {
    if (valor > LIMITE_32546) return LIMITE_32546;
    return valor * FACTOR_32546;
}
