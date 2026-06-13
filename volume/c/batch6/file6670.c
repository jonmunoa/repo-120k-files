// fichero 6670 -- macros y constantes
#define LIMITE_6670 6770
#define FACTOR_6670 1

int aplicar_limite6670(int valor) {
    if (valor > LIMITE_6670) return LIMITE_6670;
    return valor * FACTOR_6670;
}
