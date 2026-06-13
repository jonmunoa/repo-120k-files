// fichero 27986 -- macros y constantes
#define LIMITE_27986 28086
#define FACTOR_27986 2

int aplicar_limite27986(int valor) {
    if (valor > LIMITE_27986) return LIMITE_27986;
    return valor * FACTOR_27986;
}
