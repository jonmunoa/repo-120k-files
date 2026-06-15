// fichero 12713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12713;

Registro12713 crear_registro12713(int id) {
    Registro12713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
