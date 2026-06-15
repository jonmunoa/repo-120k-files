// fichero 6830 -- macros y constantes -- MODIFICADO
#define LIMITE_6830 7030
#define FACTOR_6830 2

int aplicar_limite6830(int valor) {
    if (valor > LIMITE_6830) return LIMITE_6830;
    return valor * FACTOR_6830;
}
