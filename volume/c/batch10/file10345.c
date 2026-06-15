// fichero 10345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10345;

Registro10345 crear_registro10345(int id) {
    Registro10345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
