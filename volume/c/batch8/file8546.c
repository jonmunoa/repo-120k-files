// fichero 8546 -- macros y constantes
#define LIMITE_8546 8646
#define FACTOR_8546 2

int aplicar_limite8546(int valor) {
    if (valor > LIMITE_8546) return LIMITE_8546;
    return valor * FACTOR_8546;
}
