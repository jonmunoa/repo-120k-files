// fichero 13526 -- macros y constantes -- MODIFICADO
#define LIMITE_13526 13726
#define FACTOR_13526 3

int aplicar_limite13526(int valor) {
    if (valor > LIMITE_13526) return LIMITE_13526;
    return valor * FACTOR_13526;
}
