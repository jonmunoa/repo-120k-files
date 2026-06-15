// fichero 24606 -- macros y constantes -- MODIFICADO
#define LIMITE_24606 24806
#define FACTOR_24606 3

int aplicar_limite24606(int valor) {
    if (valor > LIMITE_24606) return LIMITE_24606;
    return valor * FACTOR_24606;
}
