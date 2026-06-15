// fichero 21162 -- macros y constantes -- MODIFICADO
#define LIMITE_21162 21362
#define FACTOR_21162 4

int aplicar_limite21162(int valor) {
    if (valor > LIMITE_21162) return LIMITE_21162;
    return valor * FACTOR_21162;
}
