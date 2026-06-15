// fichero 43638 -- macros y constantes -- MODIFICADO
#define LIMITE_43638 43838
#define FACTOR_43638 5

int aplicar_limite43638(int valor) {
    if (valor > LIMITE_43638) return LIMITE_43638;
    return valor * FACTOR_43638;
}
