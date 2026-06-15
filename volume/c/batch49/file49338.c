// fichero 49338 -- macros y constantes -- MODIFICADO
#define LIMITE_49338 49538
#define FACTOR_49338 5

int aplicar_limite49338(int valor) {
    if (valor > LIMITE_49338) return LIMITE_49338;
    return valor * FACTOR_49338;
}
