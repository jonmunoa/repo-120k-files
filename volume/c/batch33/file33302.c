// fichero 33302 -- macros y constantes -- MODIFICADO
#define LIMITE_33302 33502
#define FACTOR_33302 4

int aplicar_limite33302(int valor) {
    if (valor > LIMITE_33302) return LIMITE_33302;
    return valor * FACTOR_33302;
}
