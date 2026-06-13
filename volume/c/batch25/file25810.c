// fichero 25810 -- macros y constantes
#define LIMITE_25810 25910
#define FACTOR_25810 1

int aplicar_limite25810(int valor) {
    if (valor > LIMITE_25810) return LIMITE_25810;
    return valor * FACTOR_25810;
}
