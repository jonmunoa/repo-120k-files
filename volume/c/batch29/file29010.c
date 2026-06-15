// fichero 29010 -- macros y constantes -- MODIFICADO
#define LIMITE_29010 29210
#define FACTOR_29010 2

int aplicar_limite29010(int valor) {
    if (valor > LIMITE_29010) return LIMITE_29010;
    return valor * FACTOR_29010;
}
