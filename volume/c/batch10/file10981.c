// fichero 10981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10981;

Registro10981 crear_registro10981(int id) {
    Registro10981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10981(Registro10981 r) {
    return r.valor + r.id;
}
