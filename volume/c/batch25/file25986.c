// fichero 25986 -- macros y constantes
#define LIMITE_25986 26086
#define FACTOR_25986 2

int aplicar_limite25986(int valor) {
    if (valor > LIMITE_25986) return LIMITE_25986;
    return valor * FACTOR_25986;
}
