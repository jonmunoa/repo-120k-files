// fichero 2446 -- macros y constantes -- MODIFICADO
#define LIMITE_2446 2646
#define FACTOR_2446 3

int aplicar_limite2446(int valor) {
    if (valor > LIMITE_2446) return LIMITE_2446;
    return valor * FACTOR_2446;
}
