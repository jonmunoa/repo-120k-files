// fichero 14785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14785;

Registro14785 crear_registro14785(int id) {
    Registro14785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
