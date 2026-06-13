// fichero 49138 -- macros y constantes
#define LIMITE_49138 49238
#define FACTOR_49138 4

int aplicar_limite49138(int valor) {
    if (valor > LIMITE_49138) return LIMITE_49138;
    return valor * FACTOR_49138;
}
