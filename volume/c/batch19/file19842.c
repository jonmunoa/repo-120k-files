// fichero 19842 -- macros y constantes
#define LIMITE_19842 19942
#define FACTOR_19842 3

int aplicar_limite19842(int valor) {
    if (valor > LIMITE_19842) return LIMITE_19842;
    return valor * FACTOR_19842;
}
