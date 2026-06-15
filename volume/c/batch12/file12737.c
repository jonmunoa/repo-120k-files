// fichero 12737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12737;

Registro12737 crear_registro12737(int id) {
    Registro12737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
