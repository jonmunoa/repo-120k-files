// fichero 49918 -- macros y constantes -- MODIFICADO
#define LIMITE_49918 50118
#define FACTOR_49918 5

int aplicar_limite49918(int valor) {
    if (valor > LIMITE_49918) return LIMITE_49918;
    return valor * FACTOR_49918;
}
