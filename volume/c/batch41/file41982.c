// fichero 41982 -- macros y constantes
#define LIMITE_41982 42082
#define FACTOR_41982 3

int aplicar_limite41982(int valor) {
    if (valor > LIMITE_41982) return LIMITE_41982;
    return valor * FACTOR_41982;
}
