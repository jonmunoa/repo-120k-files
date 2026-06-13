// fichero 23042 -- macros y constantes
#define LIMITE_23042 23142
#define FACTOR_23042 3

int aplicar_limite23042(int valor) {
    if (valor > LIMITE_23042) return LIMITE_23042;
    return valor * FACTOR_23042;
}
