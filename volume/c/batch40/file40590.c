// fichero 40590 -- macros y constantes
#define LIMITE_40590 40690
#define FACTOR_40590 1

int aplicar_limite40590(int valor) {
    if (valor > LIMITE_40590) return LIMITE_40590;
    return valor * FACTOR_40590;
}
