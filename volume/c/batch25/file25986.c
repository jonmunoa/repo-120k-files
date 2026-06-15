// fichero 25986 -- macros y constantes -- MODIFICADO
#define LIMITE_25986 26186
#define FACTOR_25986 3

int aplicar_limite25986(int valor) {
    if (valor > LIMITE_25986) return LIMITE_25986;
    return valor * FACTOR_25986;
}
