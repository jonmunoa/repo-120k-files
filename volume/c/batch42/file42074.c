// fichero 42074 -- macros y constantes -- MODIFICADO
#define LIMITE_42074 42274
#define FACTOR_42074 6

int aplicar_limite42074(int valor) {
    if (valor > LIMITE_42074) return LIMITE_42074;
    return valor * FACTOR_42074;
}
