// fichero 40638 -- macros y constantes -- MODIFICADO
#define LIMITE_40638 40838
#define FACTOR_40638 5

int aplicar_limite40638(int valor) {
    if (valor > LIMITE_40638) return LIMITE_40638;
    return valor * FACTOR_40638;
}
