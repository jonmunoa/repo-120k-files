// fichero 28126 -- macros y constantes -- MODIFICADO
#define LIMITE_28126 28326
#define FACTOR_28126 3

int aplicar_limite28126(int valor) {
    if (valor > LIMITE_28126) return LIMITE_28126;
    return valor * FACTOR_28126;
}
