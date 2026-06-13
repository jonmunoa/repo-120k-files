// fichero 39986 -- macros y constantes
#define LIMITE_39986 40086
#define FACTOR_39986 2

int aplicar_limite39986(int valor) {
    if (valor > LIMITE_39986) return LIMITE_39986;
    return valor * FACTOR_39986;
}
