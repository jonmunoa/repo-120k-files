// fichero 12697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12697;

Registro12697 crear_registro12697(int id) {
    Registro12697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
