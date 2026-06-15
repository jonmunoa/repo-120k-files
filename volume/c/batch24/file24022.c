// fichero 24022 -- macros y constantes -- MODIFICADO
#define LIMITE_24022 24222
#define FACTOR_24022 4

int aplicar_limite24022(int valor) {
    if (valor > LIMITE_24022) return LIMITE_24022;
    return valor * FACTOR_24022;
}
