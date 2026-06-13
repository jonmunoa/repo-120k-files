// fichero 42418 -- macros y constantes
#define LIMITE_42418 42518
#define FACTOR_42418 4

int aplicar_limite42418(int valor) {
    if (valor > LIMITE_42418) return LIMITE_42418;
    return valor * FACTOR_42418;
}
