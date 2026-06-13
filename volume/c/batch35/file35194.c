// fichero 35194 -- macros y constantes
#define LIMITE_35194 35294
#define FACTOR_35194 5

int aplicar_limite35194(int valor) {
    if (valor > LIMITE_35194) return LIMITE_35194;
    return valor * FACTOR_35194;
}
