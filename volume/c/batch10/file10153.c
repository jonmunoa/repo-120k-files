// fichero 10153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10153;

Registro10153 crear_registro10153(int id) {
    Registro10153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
