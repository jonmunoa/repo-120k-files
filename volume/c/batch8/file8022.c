// fichero 8022 -- macros y constantes -- MODIFICADO
#define LIMITE_8022 8222
#define FACTOR_8022 4

int aplicar_limite8022(int valor) {
    if (valor > LIMITE_8022) return LIMITE_8022;
    return valor * FACTOR_8022;
}
