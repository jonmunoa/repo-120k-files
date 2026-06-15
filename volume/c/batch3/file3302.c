// fichero 3302 -- macros y constantes -- MODIFICADO
#define LIMITE_3302 3502
#define FACTOR_3302 4

int aplicar_limite3302(int valor) {
    if (valor > LIMITE_3302) return LIMITE_3302;
    return valor * FACTOR_3302;
}
