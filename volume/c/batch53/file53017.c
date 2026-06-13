// fichero 53017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53017;

Registro53017 crear_registro53017(int id) {
    Registro53017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53017(Registro53017 r) {
    return r.valor + r.id;
}
