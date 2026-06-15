// fichero 34202 -- macros y constantes -- MODIFICADO
#define LIMITE_34202 34402
#define FACTOR_34202 4

int aplicar_limite34202(int valor) {
    if (valor > LIMITE_34202) return LIMITE_34202;
    return valor * FACTOR_34202;
}
