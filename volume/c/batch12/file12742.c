// fichero 12742 -- macros y constantes -- MODIFICADO
#define LIMITE_12742 12942
#define FACTOR_12742 4

int aplicar_limite12742(int valor) {
    if (valor > LIMITE_12742) return LIMITE_12742;
    return valor * FACTOR_12742;
}
