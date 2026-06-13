// fichero 24986 -- macros y constantes
#define LIMITE_24986 25086
#define FACTOR_24986 2

int aplicar_limite24986(int valor) {
    if (valor > LIMITE_24986) return LIMITE_24986;
    return valor * FACTOR_24986;
}
