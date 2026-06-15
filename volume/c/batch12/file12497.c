// fichero 12497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12497;

Registro12497 crear_registro12497(int id) {
    Registro12497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
