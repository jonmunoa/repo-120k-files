// fichero 42153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42153;

Registro42153 crear_registro42153(int id) {
    Registro42153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
