// fichero 38150 -- macros y constantes -- MODIFICADO
#define LIMITE_38150 38350
#define FACTOR_38150 2

int aplicar_limite38150(int valor) {
    if (valor > LIMITE_38150) return LIMITE_38150;
    return valor * FACTOR_38150;
}
