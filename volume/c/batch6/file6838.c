// fichero 6838 -- macros y constantes
#define LIMITE_6838 6938
#define FACTOR_6838 4

int aplicar_limite6838(int valor) {
    if (valor > LIMITE_6838) return LIMITE_6838;
    return valor * FACTOR_6838;
}
