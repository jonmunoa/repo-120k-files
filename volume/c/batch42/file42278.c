// fichero 42278 -- macros y constantes
#define LIMITE_42278 42378
#define FACTOR_42278 4

int aplicar_limite42278(int valor) {
    if (valor > LIMITE_42278) return LIMITE_42278;
    return valor * FACTOR_42278;
}
