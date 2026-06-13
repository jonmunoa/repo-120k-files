// fichero 37461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37461;

Registro37461 crear_registro37461(int id) {
    Registro37461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37461(Registro37461 r) {
    return r.valor + r.id;
}
