// fichero 24986 -- macros y constantes -- MODIFICADO
#define LIMITE_24986 25186
#define FACTOR_24986 3

int aplicar_limite24986(int valor) {
    if (valor > LIMITE_24986) return LIMITE_24986;
    return valor * FACTOR_24986;
}
