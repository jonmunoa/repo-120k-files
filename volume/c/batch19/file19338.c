// fichero 19338 -- macros y constantes -- MODIFICADO
#define LIMITE_19338 19538
#define FACTOR_19338 5

int aplicar_limite19338(int valor) {
    if (valor > LIMITE_19338) return LIMITE_19338;
    return valor * FACTOR_19338;
}
