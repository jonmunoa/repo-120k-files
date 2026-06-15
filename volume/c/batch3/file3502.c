// fichero 3502 -- macros y constantes -- MODIFICADO
#define LIMITE_3502 3702
#define FACTOR_3502 4

int aplicar_limite3502(int valor) {
    if (valor > LIMITE_3502) return LIMITE_3502;
    return valor * FACTOR_3502;
}
