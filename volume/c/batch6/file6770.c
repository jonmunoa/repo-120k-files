// fichero 6770 -- macros y constantes
#define LIMITE_6770 6870
#define FACTOR_6770 1

int aplicar_limite6770(int valor) {
    if (valor > LIMITE_6770) return LIMITE_6770;
    return valor * FACTOR_6770;
}
