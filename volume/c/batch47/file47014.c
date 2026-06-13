// fichero 47014 -- macros y constantes
#define LIMITE_47014 47114
#define FACTOR_47014 5

int aplicar_limite47014(int valor) {
    if (valor > LIMITE_47014) return LIMITE_47014;
    return valor * FACTOR_47014;
}
