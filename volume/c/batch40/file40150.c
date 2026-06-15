// fichero 40150 -- macros y constantes -- MODIFICADO
#define LIMITE_40150 40350
#define FACTOR_40150 2

int aplicar_limite40150(int valor) {
    if (valor > LIMITE_40150) return LIMITE_40150;
    return valor * FACTOR_40150;
}
