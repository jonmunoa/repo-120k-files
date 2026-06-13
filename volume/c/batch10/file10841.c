// fichero 10841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10841;

Registro10841 crear_registro10841(int id) {
    Registro10841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10841(Registro10841 r) {
    return r.valor + r.id;
}
