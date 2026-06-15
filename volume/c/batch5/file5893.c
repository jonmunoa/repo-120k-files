// fichero 5893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5893;

Registro5893 crear_registro5893(int id) {
    Registro5893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
