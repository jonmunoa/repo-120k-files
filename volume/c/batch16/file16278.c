// fichero 16278 -- macros y constantes
#define LIMITE_16278 16378
#define FACTOR_16278 4

int aplicar_limite16278(int valor) {
    if (valor > LIMITE_16278) return LIMITE_16278;
    return valor * FACTOR_16278;
}
