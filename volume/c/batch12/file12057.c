// fichero 12057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12057;

Registro12057 crear_registro12057(int id) {
    Registro12057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
