// fichero 34302 -- macros y constantes -- MODIFICADO
#define LIMITE_34302 34502
#define FACTOR_34302 4

int aplicar_limite34302(int valor) {
    if (valor > LIMITE_34302) return LIMITE_34302;
    return valor * FACTOR_34302;
}
