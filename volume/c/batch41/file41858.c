// fichero 41858 -- macros y constantes
#define LIMITE_41858 41958
#define FACTOR_41858 4

int aplicar_limite41858(int valor) {
    if (valor > LIMITE_41858) return LIMITE_41858;
    return valor * FACTOR_41858;
}
