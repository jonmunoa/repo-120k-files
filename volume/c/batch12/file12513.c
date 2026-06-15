// fichero 12513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12513;

Registro12513 crear_registro12513(int id) {
    Registro12513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
