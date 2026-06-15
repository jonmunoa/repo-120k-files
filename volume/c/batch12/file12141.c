// fichero 12141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12141;

Registro12141 crear_registro12141(int id) {
    Registro12141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
