// fichero 35638 -- macros y constantes -- MODIFICADO
#define LIMITE_35638 35838
#define FACTOR_35638 5

int aplicar_limite35638(int valor) {
    if (valor > LIMITE_35638) return LIMITE_35638;
    return valor * FACTOR_35638;
}
