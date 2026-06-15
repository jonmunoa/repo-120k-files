// fichero 1134 -- macros y constantes -- MODIFICADO
#define LIMITE_1134 1334
#define FACTOR_1134 6

int aplicar_limite1134(int valor) {
    if (valor > LIMITE_1134) return LIMITE_1134;
    return valor * FACTOR_1134;
}
