// fichero 42777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42777;

Registro42777 crear_registro42777(int id) {
    Registro42777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42777(Registro42777 r) {
    return r.valor + r.id;
}
