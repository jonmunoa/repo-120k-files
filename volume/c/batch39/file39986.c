// fichero 39986 -- macros y constantes -- MODIFICADO
#define LIMITE_39986 40186
#define FACTOR_39986 3

int aplicar_limite39986(int valor) {
    if (valor > LIMITE_39986) return LIMITE_39986;
    return valor * FACTOR_39986;
}
