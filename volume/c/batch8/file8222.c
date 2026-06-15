// fichero 8222 -- macros y constantes -- MODIFICADO
#define LIMITE_8222 8422
#define FACTOR_8222 4

int aplicar_limite8222(int valor) {
    if (valor > LIMITE_8222) return LIMITE_8222;
    return valor * FACTOR_8222;
}
