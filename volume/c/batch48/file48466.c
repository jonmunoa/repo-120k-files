// fichero 48466 -- macros y constantes -- MODIFICADO
#define LIMITE_48466 48666
#define FACTOR_48466 3

int aplicar_limite48466(int valor) {
    if (valor > LIMITE_48466) return LIMITE_48466;
    return valor * FACTOR_48466;
}
