// fichero 12181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12181;

Registro12181 crear_registro12181(int id) {
    Registro12181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
