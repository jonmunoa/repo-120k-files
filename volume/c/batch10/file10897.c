// fichero 10897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10897;

Registro10897 crear_registro10897(int id) {
    Registro10897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10897(Registro10897 r) {
    return r.valor + r.id;
}
