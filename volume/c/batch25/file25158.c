// fichero 25158 -- macros y constantes -- MODIFICADO
#define LIMITE_25158 25358
#define FACTOR_25158 5

int aplicar_limite25158(int valor) {
    if (valor > LIMITE_25158) return LIMITE_25158;
    return valor * FACTOR_25158;
}
