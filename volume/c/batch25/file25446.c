// fichero 25446 -- macros y constantes -- MODIFICADO
#define LIMITE_25446 25646
#define FACTOR_25446 3

int aplicar_limite25446(int valor) {
    if (valor > LIMITE_25446) return LIMITE_25446;
    return valor * FACTOR_25446;
}
