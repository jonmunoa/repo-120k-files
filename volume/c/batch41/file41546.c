// fichero 41546 -- macros y constantes
#define LIMITE_41546 41646
#define FACTOR_41546 2

int aplicar_limite41546(int valor) {
    if (valor > LIMITE_41546) return LIMITE_41546;
    return valor * FACTOR_41546;
}
