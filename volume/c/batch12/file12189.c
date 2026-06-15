// fichero 12189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12189;

Registro12189 crear_registro12189(int id) {
    Registro12189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
