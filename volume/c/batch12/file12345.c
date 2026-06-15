// fichero 12345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12345;

Registro12345 crear_registro12345(int id) {
    Registro12345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
