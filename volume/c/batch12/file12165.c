// fichero 12165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12165;

Registro12165 crear_registro12165(int id) {
    Registro12165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
