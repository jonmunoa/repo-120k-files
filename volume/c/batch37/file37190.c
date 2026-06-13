// fichero 37190 -- macros y constantes
#define LIMITE_37190 37290
#define FACTOR_37190 1

int aplicar_limite37190(int valor) {
    if (valor > LIMITE_37190) return LIMITE_37190;
    return valor * FACTOR_37190;
}
