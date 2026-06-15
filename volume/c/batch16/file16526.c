// fichero 16526 -- macros y constantes -- MODIFICADO
#define LIMITE_16526 16726
#define FACTOR_16526 3

int aplicar_limite16526(int valor) {
    if (valor > LIMITE_16526) return LIMITE_16526;
    return valor * FACTOR_16526;
}
