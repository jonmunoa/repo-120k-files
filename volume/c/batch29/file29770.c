// fichero 29770 -- macros y constantes
#define LIMITE_29770 29870
#define FACTOR_29770 1

int aplicar_limite29770(int valor) {
    if (valor > LIMITE_29770) return LIMITE_29770;
    return valor * FACTOR_29770;
}
