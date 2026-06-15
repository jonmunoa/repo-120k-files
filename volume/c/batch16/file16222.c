// fichero 16222 -- macros y constantes -- MODIFICADO
#define LIMITE_16222 16422
#define FACTOR_16222 4

int aplicar_limite16222(int valor) {
    if (valor > LIMITE_16222) return LIMITE_16222;
    return valor * FACTOR_16222;
}
