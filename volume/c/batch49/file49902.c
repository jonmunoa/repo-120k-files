// fichero 49902 -- macros y constantes -- MODIFICADO
#define LIMITE_49902 50102
#define FACTOR_49902 4

int aplicar_limite49902(int valor) {
    if (valor > LIMITE_49902) return LIMITE_49902;
    return valor * FACTOR_49902;
}
