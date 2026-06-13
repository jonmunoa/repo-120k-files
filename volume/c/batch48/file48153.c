// fichero 48153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48153;

Registro48153 crear_registro48153(int id) {
    Registro48153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48153(Registro48153 r) {
    return r.valor + r.id;
}
