// fichero 37026 -- macros y constantes -- MODIFICADO
#define LIMITE_37026 37226
#define FACTOR_37026 3

int aplicar_limite37026(int valor) {
    if (valor > LIMITE_37026) return LIMITE_37026;
    return valor * FACTOR_37026;
}
