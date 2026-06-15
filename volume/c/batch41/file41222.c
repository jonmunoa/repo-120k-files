// fichero 41222 -- macros y constantes -- MODIFICADO
#define LIMITE_41222 41422
#define FACTOR_41222 4

int aplicar_limite41222(int valor) {
    if (valor > LIMITE_41222) return LIMITE_41222;
    return valor * FACTOR_41222;
}
