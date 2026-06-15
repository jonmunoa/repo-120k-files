// fichero 35338 -- macros y constantes -- MODIFICADO
#define LIMITE_35338 35538
#define FACTOR_35338 5

int aplicar_limite35338(int valor) {
    if (valor > LIMITE_35338) return LIMITE_35338;
    return valor * FACTOR_35338;
}
