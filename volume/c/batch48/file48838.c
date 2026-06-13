// fichero 48838 -- macros y constantes
#define LIMITE_48838 48938
#define FACTOR_48838 4

int aplicar_limite48838(int valor) {
    if (valor > LIMITE_48838) return LIMITE_48838;
    return valor * FACTOR_48838;
}
