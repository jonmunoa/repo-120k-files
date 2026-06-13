// fichero 34810 -- macros y constantes
#define LIMITE_34810 34910
#define FACTOR_34810 1

int aplicar_limite34810(int valor) {
    if (valor > LIMITE_34810) return LIMITE_34810;
    return valor * FACTOR_34810;
}
