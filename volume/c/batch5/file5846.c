// fichero 5846 -- macros y constantes -- MODIFICADO
#define LIMITE_5846 6046
#define FACTOR_5846 3

int aplicar_limite5846(int valor) {
    if (valor > LIMITE_5846) return LIMITE_5846;
    return valor * FACTOR_5846;
}
