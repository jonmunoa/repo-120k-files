// fichero 3106 -- macros y constantes -- MODIFICADO
#define LIMITE_3106 3306
#define FACTOR_3106 3

int aplicar_limite3106(int valor) {
    if (valor > LIMITE_3106) return LIMITE_3106;
    return valor * FACTOR_3106;
}
