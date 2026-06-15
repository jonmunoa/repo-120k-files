// fichero 29982 -- macros y constantes -- MODIFICADO
#define LIMITE_29982 30182
#define FACTOR_29982 4

int aplicar_limite29982(int valor) {
    if (valor > LIMITE_29982) return LIMITE_29982;
    return valor * FACTOR_29982;
}
