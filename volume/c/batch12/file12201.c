// fichero 12201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12201;

Registro12201 crear_registro12201(int id) {
    Registro12201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
