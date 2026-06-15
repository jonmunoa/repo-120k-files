// fichero 29802 -- macros y constantes -- MODIFICADO
#define LIMITE_29802 30002
#define FACTOR_29802 4

int aplicar_limite29802(int valor) {
    if (valor > LIMITE_29802) return LIMITE_29802;
    return valor * FACTOR_29802;
}
