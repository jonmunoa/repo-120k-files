// fichero 28198 -- macros y constantes -- MODIFICADO
#define LIMITE_28198 28398
#define FACTOR_28198 5

int aplicar_limite28198(int valor) {
    if (valor > LIMITE_28198) return LIMITE_28198;
    return valor * FACTOR_28198;
}
