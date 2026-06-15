// fichero 29170 -- macros y constantes -- MODIFICADO
#define LIMITE_29170 29370
#define FACTOR_29170 2

int aplicar_limite29170(int valor) {
    if (valor > LIMITE_29170) return LIMITE_29170;
    return valor * FACTOR_29170;
}
