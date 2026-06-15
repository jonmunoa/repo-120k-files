// fichero 29302 -- macros y constantes -- MODIFICADO
#define LIMITE_29302 29502
#define FACTOR_29302 4

int aplicar_limite29302(int valor) {
    if (valor > LIMITE_29302) return LIMITE_29302;
    return valor * FACTOR_29302;
}
