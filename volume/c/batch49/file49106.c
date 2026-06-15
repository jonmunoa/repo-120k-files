// fichero 49106 -- macros y constantes -- MODIFICADO
#define LIMITE_49106 49306
#define FACTOR_49106 3

int aplicar_limite49106(int valor) {
    if (valor > LIMITE_49106) return LIMITE_49106;
    return valor * FACTOR_49106;
}
