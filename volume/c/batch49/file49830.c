// fichero 49830 -- macros y constantes -- MODIFICADO
#define LIMITE_49830 50030
#define FACTOR_49830 2

int aplicar_limite49830(int valor) {
    if (valor > LIMITE_49830) return LIMITE_49830;
    return valor * FACTOR_49830;
}
