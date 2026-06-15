// fichero 49138 -- macros y constantes -- MODIFICADO
#define LIMITE_49138 49338
#define FACTOR_49138 5

int aplicar_limite49138(int valor) {
    if (valor > LIMITE_49138) return LIMITE_49138;
    return valor * FACTOR_49138;
}
