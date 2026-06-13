// fichero 40470 -- macros y constantes
#define LIMITE_40470 40570
#define FACTOR_40470 1

int aplicar_limite40470(int valor) {
    if (valor > LIMITE_40470) return LIMITE_40470;
    return valor * FACTOR_40470;
}
