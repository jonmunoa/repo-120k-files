// fichero 12649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12649;

Registro12649 crear_registro12649(int id) {
    Registro12649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
