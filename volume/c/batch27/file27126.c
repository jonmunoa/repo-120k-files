// fichero 27126 -- macros y constantes -- MODIFICADO
#define LIMITE_27126 27326
#define FACTOR_27126 3

int aplicar_limite27126(int valor) {
    if (valor > LIMITE_27126) return LIMITE_27126;
    return valor * FACTOR_27126;
}
