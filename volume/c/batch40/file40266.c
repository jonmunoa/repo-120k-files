// fichero 40266 -- macros y constantes
#define LIMITE_40266 40366
#define FACTOR_40266 2

int aplicar_limite40266(int valor) {
    if (valor > LIMITE_40266) return LIMITE_40266;
    return valor * FACTOR_40266;
}
