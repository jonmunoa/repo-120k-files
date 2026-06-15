// fichero 20122 -- macros y constantes -- MODIFICADO
#define LIMITE_20122 20322
#define FACTOR_20122 4

int aplicar_limite20122(int valor) {
    if (valor > LIMITE_20122) return LIMITE_20122;
    return valor * FACTOR_20122;
}
