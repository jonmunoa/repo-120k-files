// fichero 17446 -- macros y constantes -- MODIFICADO
#define LIMITE_17446 17646
#define FACTOR_17446 3

int aplicar_limite17446(int valor) {
    if (valor > LIMITE_17446) return LIMITE_17446;
    return valor * FACTOR_17446;
}
