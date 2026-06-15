// fichero 15018 -- macros y constantes -- MODIFICADO
#define LIMITE_15018 15218
#define FACTOR_15018 5

int aplicar_limite15018(int valor) {
    if (valor > LIMITE_15018) return LIMITE_15018;
    return valor * FACTOR_15018;
}
