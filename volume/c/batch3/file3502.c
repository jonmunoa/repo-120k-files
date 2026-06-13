// fichero 3502 -- macros y constantes
#define LIMITE_3502 3602
#define FACTOR_3502 3

int aplicar_limite3502(int valor) {
    if (valor > LIMITE_3502) return LIMITE_3502;
    return valor * FACTOR_3502;
}
