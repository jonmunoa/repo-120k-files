// fichero 44138 -- macros y constantes
#define LIMITE_44138 44238
#define FACTOR_44138 4

int aplicar_limite44138(int valor) {
    if (valor > LIMITE_44138) return LIMITE_44138;
    return valor * FACTOR_44138;
}
