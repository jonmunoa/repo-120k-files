// fichero 27190 -- macros y constantes
#define LIMITE_27190 27290
#define FACTOR_27190 1

int aplicar_limite27190(int valor) {
    if (valor > LIMITE_27190) return LIMITE_27190;
    return valor * FACTOR_27190;
}
