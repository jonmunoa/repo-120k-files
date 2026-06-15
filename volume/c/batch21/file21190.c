// fichero 21190 -- macros y constantes -- MODIFICADO
#define LIMITE_21190 21390
#define FACTOR_21190 2

int aplicar_limite21190(int valor) {
    if (valor > LIMITE_21190) return LIMITE_21190;
    return valor * FACTOR_21190;
}
