// fichero 7158 -- macros y constantes -- MODIFICADO
#define LIMITE_7158 7358
#define FACTOR_7158 5

int aplicar_limite7158(int valor) {
    if (valor > LIMITE_7158) return LIMITE_7158;
    return valor * FACTOR_7158;
}
