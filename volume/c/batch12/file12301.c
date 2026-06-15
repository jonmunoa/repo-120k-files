// fichero 12301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12301;

Registro12301 crear_registro12301(int id) {
    Registro12301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
