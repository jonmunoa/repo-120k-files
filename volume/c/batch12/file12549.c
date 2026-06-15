// fichero 12549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12549;

Registro12549 crear_registro12549(int id) {
    Registro12549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
