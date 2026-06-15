// fichero 12093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12093;

Registro12093 crear_registro12093(int id) {
    Registro12093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
