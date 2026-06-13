// fichero 40546 -- macros y constantes
#define LIMITE_40546 40646
#define FACTOR_40546 2

int aplicar_limite40546(int valor) {
    if (valor > LIMITE_40546) return LIMITE_40546;
    return valor * FACTOR_40546;
}
