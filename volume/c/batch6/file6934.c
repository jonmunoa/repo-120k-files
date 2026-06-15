// fichero 6934 -- macros y constantes -- MODIFICADO
#define LIMITE_6934 7134
#define FACTOR_6934 6

int aplicar_limite6934(int valor) {
    if (valor > LIMITE_6934) return LIMITE_6934;
    return valor * FACTOR_6934;
}
